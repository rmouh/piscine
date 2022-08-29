/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:35:58 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/29 14:35:59 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>
#include <stdlib.h>

//struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putnbr(int nb)
{
	int	temp;

	temp = nb;
	if (temp == -2147483648)
	{	
		write(1, "-2147483648", 11);
		return ;
	}
	else if (temp < 0)
	{
		temp = temp * (-1);
		write(1, "-", 1);
	}
	if (temp / 10 != 0)
		ft_putnbr(temp / 10);
	temp = temp % 10 + '0';
	write(1, &temp, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		write (1, str++, 1);
	write (1, "\n", 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		i++;
	}
}
/*
int main(int argc,char **argv)
{
	argv++;
	t_stock_str *r = ft_strs_to_tab(argc -1, argv);
	ft_show_tab(r);
	free (r);
}*/