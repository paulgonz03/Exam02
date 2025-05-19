
/*
	Write a program that prints the numbers from 1 to 100, each separated by a
	newline.

	If the number is a multiple of 3, it prints 'fizz' instead.

	If the number is a multiple of 5, it prints 'buzz' instead.

	If the number is both a multiple of 3 and a multiple of 5, it prints 'fizzbuzz' instead.

*/

#include <unistd.h>

void	ft_putnbr(int number)
{
	if (number > 9)
		ft_putnbr(number / 10);
	write(1, &(char){number % 10 + '0'}, 1);
}

int	main(void)
{
	int	number;

	number = 1;
	while (number <= 100)
	{
		if (number % 3 == 0 && number % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (number % 3 == 0)
			write(1, "fizz", 4);
		else if (number % 5 == 0)
			write(1, "buzz", 4);
		else
			ft_putnbr(number);
		write(1, "\n", 1);
		number++;
	}
}