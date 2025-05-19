#include <unistd.h>

void print_hex(int p)
{
	char *str= "0123456789abcdef";
	int i = 0;
	char buffer[8];

	if (p == 0)
		write(1, "0", 1);
	while (p)
	{
		buffer[i++] = str[p %16];
		p /= 16;
	}
	while (i--)
		write(1, &buffer[i], 1);
}

int	ft_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int nbr = 0;

	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr * sign);
}
int main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
}