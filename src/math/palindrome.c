/*
** EPITECH PROJECT, 2018
** SYN_palindrome_2017
** File description:
** palindrome
*/

#include "../../include/palindrome.h"

void display_nothing(char *old, char *new)
{
	printf("no solution\n");
	free(old);
	free(new);
	exit(0);
}

void display_end(char *old, char *new, int count, palindrome_t *p)
{
	printf("%i leads to %i in %i iteration(s)",
		p->d.data, converttodecimal(new, p->d.base),
		count);
	printf(" in base %i\n", p->d.base);
	free(old);
	free(new);
	exit(0);
}

void palindrome(palindrome_t *p)
{
	int count = 0;
	int rev;
	char *old = malloc(sizeof(char) * 100);
	char *new;

	baseconv(old, p->d.data, p->d.base);
	new = strrev(my_strdup(old));
	for (count = 0; count <= p->d.imax &&
		strlen(old) < 10 && strlen(new) < 10; count++) {
		if (strcmp(new, old) == 0 && count >= p->d.imin)
			display_end(old, new, count, p);
		rev = converttodecimal(new, p->d.base);
		rev = rev + converttodecimal(old, p->d.base);
		baseconv(new, rev, p->d.base);
		free(old);
		old = strrev(my_strdup(new));
		free(new);
		new = strrev(my_strdup(old));
	}
	display_nothing(old, new);
}