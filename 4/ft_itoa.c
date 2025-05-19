// Write a function that takes an int and converts it to a null-terminated string.

// The function returns the result in a char array that you must allocate.

// Your function must be declared as follows:

// char	*ft_itoa(int nbr);

#include <string.h>

int	len(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
	{
		i = 11;
		return (i);
	}
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	if (n == 0)
		i++;
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*minnum(int nb, char *p, int aux)
{
	nb *= -1;
	nb = nb - 1;
	if (nb == 2147483647)
	{
		p[aux--] = (nb % 10) + 49;
		nb = nb / 10;
	}
	while (nb > 0)
	{
		p[aux--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (p);
}

char	*ft_itoa(int n)
{
	char	*p;
	int		aux;
	int		nb;

	nb = n;
	aux = len(n);
	p = malloc((aux + 1) * sizeof(char));
	if (!p)
		return (NULL);
	p[aux--] = '\0';
	if (!nb)
		p[0] = '0';
	if (nb == -2147483648)
		minnum(nb, p, aux);
	if (nb < 0)
	{
		nb *= -1;
		p[0] = '-';
	}
	while (nb > 0)
	{
		p[aux--] = (nb % 10) + 48;
		nb = nb / 10;
	}
	return (p);
}
