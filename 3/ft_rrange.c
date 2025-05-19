#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int len = (end - start) + 1;
    int *result;
    int i = 0;
    if (len < 0)
        len = -len + 1;
    result = (int *)malloc(sizeof(int) * len);
    if (!result)
        return NULL;
    while (i < len)
    {
        result[i] = end;
        end--;
        i++;
    }
    return result;
}