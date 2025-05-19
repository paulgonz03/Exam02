#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int len;
    int *result;
    if(start <= end)
        len = (end - start) + 1;
    else
        len = (start - end) + 1;
    if(!(result = (int *)malloc(sizeof(int) * len)))
        return(NULL);
    while(i < len)
    {
        result[i++] = start;
        if(start < end)
            start++;
        else
            start--;
    }
    return(result);
}