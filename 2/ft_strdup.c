
/*
	Reproduce the behavior of the function strdup (man strdup).

	Your function must be declared as follows:

	char    *ft_strdup(char *src);

*/

#include <stdlib.h>
#include <stdio.h>

char *ft_strdup(char *src)
{
	int i = 0;
	char *dest;

	while (src[i])
		i++;
	dest = malloc(sizeof(char) * (i + 1));
	if(!dest)
		return NULL;
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return dest;
}