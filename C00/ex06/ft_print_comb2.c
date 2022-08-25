/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:53:21 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/11 18:35:14 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print(int a, int b, int c, int d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_print_comb2(void)
{
	int	m;
	int	c;
	int	d;
	int	u;
	int	i;

	i = 1;
	while (i <= 9899)
	{
		u = (i % 10) + 48;
		d = (i / 10) % 10 + 48;
		c = (i / 100) % 10 + 48;
		m = (i / 1000) % 10 + 48;
		if ((m * 10 + c) < (d * 10 + u))
		{
			ft_print(m, c, d, u);
			if (i != 9899)
			{
				write(1, ", ", 2);
			}
		}
		i++;
	}
}
