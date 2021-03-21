#include "ft_stock_str.h"
#include <stdio.h>
#include <stdlib.h>

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main(void)
{
    char *lol[3];

    lol[0] = "oui";
    lol[1] = "mon gars";
    lol[2] = "alz";
    t_stock_str *plz = ft_strs_to_tab(3, lol);
    ft_show_tab(plz);
    free(plz);
    return (0);
}