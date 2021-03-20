#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
    int n;

    while (*str)
    {
        n++;
        str++;
    }
    return (n);
}

char *ft_strcpy(char *str)
{
    char *dest;
    if (!(dest = malloc(ft_strlen(str) + 1)))
        return (dest);
    while ((*dest++ = *str++))
        ;
    dest = '\0';
    return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *str_t;
    t_stock_str *save;
    int i;

    save = str_t;
    if (!(str_t = malloc(sizeof(struct s_stock_str) * (ac + 2))))
        return (0);
    i = 0;
    while (i < ac)
    {
        save->size = ft_strlen(av[i]);
        save->str = av[i];
        save->copy = ft_strcpy(av[i]);
        save++;
        i++;
    }
    save->str = '\0';
    return (str_t);
}