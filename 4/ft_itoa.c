#include <stdlib.h>

char *ft_itoa(int nbr)
{
    long n = nbr;
    int len = (n <= 0); 
    long tmp = n;
    while(tmp)
    {
        tmp /= 10;
        len++;
    }
    char *str = malloc(len + 1);
    if(!str) return NULL;
    str[len] = '\0';
    if(n == 0)
        str[0] = '0';
    if(n < 0)
    {
        str[0] = '-';
        n = -n;
    }
    while(n)
    {
        str[--len] = '0' + (n % 10);
        n /= 10;
    }
    return(str);
}
