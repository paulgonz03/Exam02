#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

unsigned int gcd(unsigned int a, unsigned int b)
{
	unsigned int temp;
	
	while (b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	unsigned int n1 = atoi(argv[1]);
	unsigned int n2 = atoi(argv[2]);
	unsigned int res = gcd(n1, n2);
	printf("%d\n", res);
}