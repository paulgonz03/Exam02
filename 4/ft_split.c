#include <stdio.h>
#include <stdlib.h>

char *ft_strncpy(char *s1, char *s2, int n)
{
    int i = 0;
    while (i < n && s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}

char **ft_split(char *str)
{
    int i = 0; 
    int j = 0;
    int k = 0;
    int wc = 0;
    char **out;
    
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        if (str[i])
            wc++;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
    }

    out = (char **)malloc(sizeof(char *) * (wc + 1));
    if (!out) 
        return NULL;
    i = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        j = i;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            i++;
        if (i > j)
        {
            out[k] = (char *)malloc(sizeof(char) * ((i - j) + 1));
            if (!out[k])
                return NULL;
            ft_strncpy(out[k++], &str[j], i - j);
        }
    }
    out[k] = NULL;
    return (out);
}
