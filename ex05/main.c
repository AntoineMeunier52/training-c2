#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main(void)
{
    char *lol[8] = {"antoine", "et", "toi", "comment", "t'appelle", "tu", "mon", "gars"};

    t_stock_str *plz = ft_strs_to_tab(8, lol);
    ft_show_tab(plz);
    free(plz);
    return (0);
}