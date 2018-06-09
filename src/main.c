/*
** EPITECH PROJECT, 2018
** SYN_palindrome_2017
** File description:
** main
*/

#include "../include/palindrome.h"

void init_data(palindrome_t *p)
{
	p->d.nflag = 0;
	p->d.pflag = 0;
	p->d.data = 0;
	p->d.base = 10;
	p->d.imin = 0;
	p->d.imax = 100;
	p->temp = 0;
}

int main(int ac, char **av)
{
	palindrome_t p;

	if (ac < 2)
		exit(84);
	init_data(&p);
	opt(ac, av, &p);
	if (p.d.nflag == 1)
		palindrome(&p);
	if (p.d.pflag == 1)
		palindromicsearch(&p);
	return (0);
}