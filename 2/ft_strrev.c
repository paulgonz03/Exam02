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