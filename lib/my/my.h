/*
** EPITECH PROJECT, 2018
** SYN_SBMLparser_2017
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void my_putchar(char c);
void my_putstr(char *str);
void my_putnbr(int nbr);
int my_strlen(char const *str);
char *my_strcat_dup(char *dest, char const *src);
int is_alphanum(char c);
char **my_str_to_word_array (char const *str);
int check_extension(char *arg, char *ext, size_t len);
int my_getnumber(char *str);
char *strrev(char *string);
char *itoa(int nb, char *str);
char *my_strdup(char *src);

#endif /* !MY_H_ */
