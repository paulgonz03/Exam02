int	max(int *tab, unsigned int len)
{
	while (!tab)
		return(0);
	int cmp = tab[0];
	unsigned int i = 1;
	while (len > i)
	{
		if (tab[i] > cmp)
			cmp = tab[i];
		i++;
	}
	return(cmp);
}