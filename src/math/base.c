/*
** EPITECH PROJECT, 2018
** SYN_palindrome_2017
** File description:
** base
*/

#include "../../include/palindrome.h"

unsigned long long tobase(unsigned long long nbr, int base)
{
	unsigned int data[3] = {0, 0, 0};

	if (nbr == 0 || base == 10)
		return (nbr);
	if (base < 2 || base > 10)
		return (-1);
	data[1] = nbr % base;
	data[2] = nbr / base;
	data[0] = (data[1] + (10 * tobase(data[2], base)));
	return (data[0]);
}

void baseconv(char *string, int nbr, int base)
{
	int count;
	char alpha[11] = "0123456789";

	for (count = 0; nbr != 0; count++) {
		string[count] = alpha[nbr % base];
		nbr = nbr / base;
	}
	string[count] = '\0';
}

/*
**	x*b^i+(x/2)*b^(i-1)+(x/4)*b^(i-2)+etc... (i == recursivity)
**	(x*b = x%b + 10(recursivity) easier and faster)
**	modulo div euclidienne
**	http://www.purplemath.com/modules/numbbase.htm
*/

int ctoi(char c)
{
	if (c >= 48 && c <= 57)
		return (c - 48);
	else
		return (c - 55);
}

int converttodecimal(char *nbr, int base)
{
	int len = my_strlen(nbr) - 1;
	int data[3] = {1, len, 0};

	if (base == 10)
		return (atoi(nbr));
	for (; data[1] >= 0; data[1]--) {
		if (ctoi(nbr[data[1]]) >= base)
			return (-1);
		data[2] += ctoi(nbr[data[1]]) * data[0];
		data[0] *= base;
	}
	return (data[2]);
}

/*
**	samething as tobase but inverted since it's a string
*/