/*
** EPITECH PROJECT, 2018
** SYN_palindrome_2017
** File description:
** help
*/

#include "../../include/palindrome.h"

void help(void)
{
	printf("USAGE\n");
	printf("\t./palindrome -n number -p palindrome [-b base] [-imin i] ");
	printf("[-imax i]\n\n");
	printf("DESCRIPTION\n");
	printf("\t-n n\t\tinteger to be transformed (>=0)\n");
	printf("\t-p pal\t\tpalindromic number to be obtained (incompatible ");
	printf("with the -n option) (>=0)\n");
	printf("\t\t\tif defined, all fitting values of n will be output\n");
	printf("\t-b base\t\tbase in which the procedure will be executed ");
	printf("(1<b<=10) [def: 10]\n");
	printf("\t-imin i\t\tminimum number of iterations, included (>=0) ");
	printf("[def: 0]\n");
	printf("\t-imax i\t\tmaximum number of iterations, included (>=0) ");
	printf("[def: 100]\n");
	exit(0);
}