#include <unistd.h>
#include <stdlib.h>
#include <unistd.h>
int	ft_atoi(const char *str)
{
    int sign = 1; 
    int result = 0;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        	str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
    while(*str >= '0' && *str <= '9')
        result = result * 10 + *str++ - '0'; 
    return (result *sign); 
}
void ft_putnbr(int num)
{
        if(num > 9)
                ft_putnbr(num / 10);
        write(1, &(char){num % 10 + '0'}, 1);
}

int	main(int argc, char *argv[])
{
    int sum = 0;
    if(argc == 2)
    {
	    int n = ft_atoi(argv[1]);
        int sum = 0;
        for (int i = 2; i <= n; ++i)
        {
            int is_prime = 1;
            for (int j = 2; j * j <= i; ++j)
            {
                if (i % j == 0)
                {
                    is_prime = 0;
                    break;
                }
            }
            if (is_prime)
                sum += i;
        }
        ft_putnbr(sum);
    }
    if (argc != 2)
        ft_putnbr(0); 
    write(1, "\n", 1);
    return 0;
}
