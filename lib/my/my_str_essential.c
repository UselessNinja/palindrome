/*
** EPITECH PROJECT, 2018
** SYN_SBMLparser_2017
** File description:
** my_str_essential
*/

#include "my.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}

void my_putstr(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		write(1, &str[i], 1);
}

void my_putnbr(int nbr)
{
	if (nbr < 0) {
		write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr < 10)
		my_putchar(nbr + '0');
	else {
		my_putnbr(nbr / 10);
		my_putchar(nbr % 10 + '0');
	}

}

int my_strlen(char const *str)
{
	int i;

	for (i = 0; str[i] != '\0' && str[i]; i++);
	return (i);
}

char *my_strcat_dup(char *dest, char const *src)
{
	int data[4] = {0, 0, 0, 0};
	char *temp = dest;

	data[0] = my_strlen(dest);
	data[1] = my_strlen(src);
	dest = malloc(sizeof(char) * (data[0] + data[1] + 1));
	for (data[2] = 0; data[2] < data[0]; data[2]++)
		dest[data[2]] = temp[data[2]];
	for (data[3] = 0; src[data[3]] != 0; data[3]++)
		dest[data[3] + data[0]] = src[data[3]];
	dest[data[0] + data[3]] = '\0';
	return (dest);
}