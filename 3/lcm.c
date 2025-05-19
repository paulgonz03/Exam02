#include <stdio.h>
#include <stdlib.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int number;
	
	if (a == 0 || b == 0)
		return 0;
	number = a;
	if (b > a)
		number = b;
	while ((number % a != 0) || (number % b != 0))
		number++;
	return number;
	
}

// int main(int argc, char **argv)
// {
// 	if (argc == 3)
// 	{
// 		unsigned int m = lcm(atoi(argv[1]), atoi(argv[2]));
// 		printf("%u\n" , m);
// 	}
	
// }