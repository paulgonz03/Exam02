#include <stdio.h>
#include <stdlib.h>

void	fprime(int n)
{
	int		i = 2;

	if (n == 1)
		printf("1");
	while (n > 1)
	{
		if (n % i == 0)
		{
			printf("%d", i);
			n /= i; 
			if (n > 1)
				printf("*");
		}
		else
			i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}