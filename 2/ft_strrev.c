
/*
	Write a function that reverses (in-place) a string.

	It must return its parameter.

	Your function must be declared as follows:

	char    *ft_strrev(char *str);
*/

char		*ft_strrev(char *str)
{
	int i;
	int	len = 0;
	char tmp;
	
	while (str[i])
		i++;
	i--;
	while (len < i)
	{
		tmp = str[i];
		str[i]=str[len];
		str[len]= tmp;
		i--;
		len++;
	}
	return (str);
	
}