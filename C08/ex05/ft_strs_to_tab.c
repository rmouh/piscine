/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:44:45 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/29 13:44:47 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_stock_str.h"

int	countlen(char *c)
{
	int	i;

	i = 0;
	while (*c++)
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*c;

	i = 0;
	size = countlen (src) + 1;
	c = malloc (size * sizeof(char));
	if (!c)
		return (0);
	while (i < size - 1)
	{
		c[i] = src[i];
		i++;
	}
	c[size] = 0;
	return (c);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int					i;
	struct s_stock_str	*tab_s;

	i = 0;
	tab_s = malloc(sizeof(t_stock_str) * (ac + 1));
	if (!tab_s)
		return (0);
	while (i < ac)
	{
		tab_s[i].size = countlen(av[i]);
		tab_s[i].str = av[i];
		tab_s[i].copy = ft_strdup(av[i]);
		i++;
	}
	tab_s[i].str = 0;
	return (tab_s);
}

# include<stdio.h>
int main(void)
{
    char    *av[100] = {"hello", "asdx", "goodbye"};
    int ac = 3;
    int i = 0;
    t_stock_str *r = ft_strs_to_tab(ac, av);
    while (i < 3)
    {
        printf("%d\n", r[i].size);
        printf("%p\n", r[i].copy);
        printf("%p\n", r[i].str);
        i++;
    }
    free (r);
}