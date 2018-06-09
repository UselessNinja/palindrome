/*
** EPITECH PROJECT, 2018
** SYN_SBMLparser_2017
** File description:
** cmp_args
*/

#include "my.h"

int check_extension(char *arg, char *ext, size_t len)
{
	char *temp = strrchr(arg, '.');

	if (temp != NULL) {
		if (len == 0)
			len = strlen(ext);
		return (strncmp(temp + 1, ext, len) == 0);
	}
	return (0);
}

char *strrev(char *string)
{
	char *bita;
	char *bitb;

	if (!string || !*string)
		return (NULL);
	bita = string;
	bitb = string + strlen(string) - 1;
	while (bitb > bita) {
		*bita ^= *bitb;
		*bitb ^= *bita;
		*bita ^= *bitb;
		++bita;
		--bitb;
	}
	return (string);
}

char *itoa(int nb, char *str)
{
	int i = 0;

	for (i = 0; nb; i++) {
		str[i] = (nb % 10) + 48;
		nb = nb / 10;
	}
	str[i] = '\0';
	strrev(str);
	return (str);
}

char *my_strdup(char *src)
{
	char *dest;
	int count = 0;

	dest = malloc(sizeof(char) * (strlen(src) + 1));
	for (count = 0; src[count] != '\0'; count++)
		dest[count] = src[count];
	dest[count] = '\0';
	return (dest);
}