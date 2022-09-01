/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:36:47 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/18 00:01:54 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

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
/*
int main(void)
{
	ft_putnbr (-2147483648);
5168
516
	
}*/
