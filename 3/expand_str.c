#include <unistd.h>
int main(int ac, char **av)
{
    int i = 0;
    int aux = 0;
    if(ac == 2)
    {
        while(av[1][i] == ' ' || av[1][i] == '\t')
            i++;
        while(av[1][i])
        {
            if(av[1][i] == ' ' || av[1][i] == '\t')
                aux = 1;
            else
            {
                if(aux)
                    write(1, "   ", 3);
                aux = 0;
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}