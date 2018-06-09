/*
** EPITECH PROJECT, 2018
** SYN_palindrome_2017
** File description:
** opt
*/

#include "../../include/palindrome.h"

void print_invalid(void)
{
	fprintf(stderr, "invalid argument\n");
	exit(84);
}

void long_parsing(int opt, palindrome_t *p)
{
	switch(opt) {
		case 'b':
			p->d.base = my_getnumber(optarg);
			if (p->d.base < 2 || p->d.base > 10)
				print_invalid();
			break;
		case 'i':
			p->d.imin = my_getnumber(optarg);
			if (p->d.imin < 0)
				print_invalid();
			break;
		case 'a':
			p->d.imax = my_getnumber(optarg);
			if (p->d.imax < 0)
				print_invalid();
			break;
	}
}

void opt_parsing(int opt, palindrome_t *p)
{
	switch (opt) {
		case '?':
			print_invalid();
			break;
		case 'n':
			p->d.nflag = 1;
			p->d.data = my_getnumber(optarg);
			if (p->d.pflag == 1 || p->d.data < 0)
				print_invalid();
			break;
		case 'p':
			p->d.pflag = 1;
			p->d.data = my_getnumber(optarg);
			if (p->d.nflag == 1 || p->d.data < 0)
				print_invalid();
			break;
		default:
			long_parsing(opt, p);
	}
}

int is_this_a_palindrome(palindrome_t *p)
{
	char *number = malloc(sizeof(char) * 100);
	char *revnumber;
	int value;

	baseconv(number, p->d.data, p->d.base);
	revnumber = strrev(my_strdup(number));
	value = strcmp(number, revnumber);
	free(revnumber);
	free(number);
	return (value);
}

void opt(int ac, char *const *av, palindrome_t *p)
{
	int opt;

	if (strcmp(av[1], "-h") == 0 && av[2] == NULL)
		help();
	opterr = 0;
	struct option long_options[] = {
		{"imin", required_argument, NULL, 'i'},
		{"imax", required_argument, NULL, 'a'},
		{NULL, 0, NULL, 0}
	};
	while (1337) {
		opt = getopt_long_only(ac, av, "n:p:b:", long_options, NULL);
		if (opt == -1)
			break;
		opt_parsing(opt, p);
	}
	if ((p->d.nflag == 0 && p->d.pflag == 0) || p->d.imax < p->d.imin ||
		(p->d.pflag == 1 && is_this_a_palindrome(p) != 0))
		print_invalid();
}