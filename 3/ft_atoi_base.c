int nbr_inbase(char c, int base)
{
	if (base <= 10)
		return(c >= '0' && c <= '9');
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= ('A' + base - 10)) || \
            (c >= 'a' && c <= ('a' + base - 10)));
	
}

int ft_atoi_base(const char *str, int base)
{
    int i = 0;
    int nbr = 0;
    int sign = 1;

    if (!str[0] || base < 2 || base > 16)
        return 0;

    while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
        i++;

    if (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            sign *= -1;

    while (str[i] && nbr_inbase(str[i], base))
    {
        if (str[i] >= 'A' && str[i] <= 'F')
            nbr = (nbr * base) + (str[i] - 'A' + 10);
        else if (str[i] >= 'a' && str[i] <= 'f')
            nbr = (nbr * base) + (str[i] - 'a' + 10);
        else if (str[i] >= '0' && str[i] <= '9')
            nbr = (nbr * base) + (str[i] - '0');

        i++;
    }
    return (nbr * sign);
}