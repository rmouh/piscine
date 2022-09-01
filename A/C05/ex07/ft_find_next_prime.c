/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:51:13 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/24 13:51:25 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	long	sqrt;

	sqrt = 1;
	if (nb <= 0)
		return (0);
	while (sqrt * sqrt <= nb && sqrt <= 46340)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (sqrt);
}

int	ft_is_prime(int nb)
{
	long	b;
	long	i;

	i = 2;
	b = (long int)nb;
	if (nb == 2)
		return (1);
	if (nb == 2147483647)
		return (2147483647);
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= b)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	i = nb + 1;
	while (i <= 2147483647)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
