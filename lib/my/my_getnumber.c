/*
** EPITECH PROJECT, 2018
** SYN_palindrome_2017
** File description:
** my_getnumber
*/

#include "my.h"

int my_getnumber(char *str)
{
	int i;
	int nb = 0;

	if (str[0] == '\0')
		return (-1);
	if (str[0] && str[0] == 45)
		return (-1);
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] < 48 || str[i] > 57)
			return (-1);
		nb += str[i] - 48;
		nb *= 10;
	}
	nb /= 10;
	return (nb);
}