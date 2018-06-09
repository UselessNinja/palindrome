/*
** EPITECH PROJECT, 2018
** undefined
** File description:
** palindrome
*/

#ifndef PALINDROME_H_
#define PALINDROME_H_

#include <stdlib.h>
#include <stdio.h>
#include <getopt.h>
#include "../lib/my/my.h"

typedef struct data_s {
	int nflag;
	int pflag;
	int data;
	int base;
	int imin;
	int imax;
} data_t;

typedef struct palindrome_s {
	data_t d;
	int temp;
} palindrome_t;

void opt(int ac, char *const *av, palindrome_t *p);
void help(void);
void palindrome(palindrome_t *p);
unsigned long long tobase(unsigned long long nbr, int base);
int converttodecimal(char *nbr, int base);
void display_nothing(char *old, char *new);
int ppalindrome(palindrome_t *p, int i);
void palindromicsearch(palindrome_t *p);
void baseconv(char *string, int nbr, int base);

#endif /* !PALINDROME_H_ */
