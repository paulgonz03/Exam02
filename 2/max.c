/*
	Write the following function:

	int		max(int* tab, unsigned int len);

	The first parameter is an array of int, the second is the number of elements in
	the array.

	The function returns the largest number found in the array.

	If the array is empty, the function returns 0.
*/

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