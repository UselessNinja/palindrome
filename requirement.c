/*
** EPITECH PROJECT, 2018
** undefined
** File description:
** requirement
*/

int factorial(int fact, int i)
{
	for (; i > 0;) {
		fact *= i;
		i--;
		factorial(fact, i);
	}
	return (fact);
}

int my_factrec_synthesis(int nb)
{
	int fact = 1;

	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	fact = factorial(fact, nb);
	return (fact);
}

int my_squareroot_synthesis(int nb)
{
	int root = 0;
	int temp;

	if (nb < 0)
		return (-1);
	if (nb == 0 || nb == 1)
		return (nb);
	for (root = root; root < 46341 && root < nb + 1; root++)
		if (root * root == nb)
			return (root);
	return (-1);
}