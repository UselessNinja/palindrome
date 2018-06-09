/*
** EPITECH PROJECT, 2018
** SYN_palindrome_2017
** File description:
** palindrometwo
*/

#include "../../include/palindrome.h"

void freeab(char *old, char *new)
{
	free(old);
	free(new);
}

void display_step(int i, int count, palindrome_t *p)
{
	printf("%i leads to %i in %i iteration(s)",
		i, p->d.data, count);
	printf(" in base %i\n", p->d.base);
	p->temp++;
}

void palindromicsearch(palindrome_t *p)
{
	int i;

	for (i = 1; i <= p->d.data; i++)
		ppalindrome(p, i);
	if (p->temp > 0)
		exit(0);
	printf("no solution\n");
	exit(0);
}

int ppalindrome(palindrome_t *p, int i)
{
	char *old = malloc(sizeof(char) * 1000);
	char *new = malloc(sizeof(char) * 1000);
	int count[2];

	baseconv(old, i, p->d.base);
	baseconv(new, p->d.data, p->d.base);
	for (count[0] = 0; count[0] <= p->d.imax &&
		strlen(old) < 10 && strlen(new) < 10; count[0]++) {
		if (strcmp(strrev(old), new) == 0 && count[0] >= p->d.imin) {
			display_step(i, count[0], p);
			freeab(old, new);
			return (0);
		}
		count[1] = converttodecimal(old, p->d.base);
		count[1] += converttodecimal(strrev(old), p->d.base);
		baseconv(old, count[1], p->d.base);
	}
	freeab(old, new);
	return (0);
}