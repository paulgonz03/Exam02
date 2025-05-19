
/*
	Write a program that takes a string and displays this string after rotating it
	one word to the left.

	Thus, the first word becomes the last, and others stay in the same order.

	A "word" is defined as a part of a string delimited either by spaces/tabs, or
	by the start/end of the string.

	Words will be separated by only one space in the output.

	If there's less than one argument, the program displays \n.

	Example:

	$>./rostring "abc   " | cat -e
	abc$
	$>
	$>./rostring "Que la      lumiere soit et la lumiere fut"
	la lumiere soit et la lumiere fut Que
	$>
	$>./rostring "     AkjhZ zLKIJz , 23y"
	zLKIJz , 23y AkjhZ
	$>
	$>./rostring | cat -e
	$
	$>
*/

#include <unistd.h>
int isblanck(char c)
{
    return(c == ' ' || c == '\t');
}

void rostring(char *s)
{
    int i = 0;
    int word_len = 0;
    while(s[i])
    {
        while(isblanck(s[i]))
            i++;
        if(s[i] && !isblanck(s[i]))
        {
            if(word_len == 0)
                while(s[i] && ! isblanck(s[i++]))
                    word_len++;
            else
            {
                while(s[i] && !isblanck(s[i]) && write(1, &s[i++], 1))
                write(1, " ", 1);
            }
        }
    }
    i = 0;
    while(isblanck(s[i]))
        i++;
    while(word_len--)
        write(1, &s[i++], 1);
}

int main (int ac, char **av)
{
    if(ac > 1 && av[1])
        rostring(av[1]);
    write(1, "\n",1);
    return(0);
}