/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:03:20 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/24 13:03:22 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb <= 0)
		return (0);
	while (sqrt * sqrt <= nb && sqrt <= 46340)
	{
		if (sqrt * sqrt == nb)
			return (sqrt);
		sqrt++;
	}
	return (0);
}

int	ft_is_prime(int nb)
{
	int	sqrt;
	int	i;

	i = 2;
	if (nb <= 1 || nb % 2 == 0)
		return (0);
	else if (nb == 2 || nb == 2147483647)
		return (1);
	sqrt = ft_sqrt(nb);
	while (i < sqrt && i < 46340)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
