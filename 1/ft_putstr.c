//Write a function that displays a string on the standard output.
//The pointer passed to the function contains the address of the string's first character.

#include <unistd.h>

void	ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1,&str[i++],1);
    }   
}