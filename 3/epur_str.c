
/*

	Write a program that takes a string, and displays this string with exactly one
	space between words, with no spaces or tabs either at the beginning or the end,
	followed by a \n.

	A "word" is defined as a part of a string delimited either by spaces/tabs, or
	by the start/end of the string.

	If the number of arguments is not 1, or if there are no words to display, the
	program displays \n.
	
*/

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int  flag = 0;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i])
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				flag = 1;
			if (!(argv[1][i] == ' ' || argv[1][i] == '\t'))
			{
				if (flag)
					write(1, " ", 1);
				flag = 0;
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	
}
