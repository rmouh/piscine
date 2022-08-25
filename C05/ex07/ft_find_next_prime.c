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

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb == 2147483647)
		return (0);
	i = nb + 1;
	while (i <= 2147483647)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	printf("le sqrt :%d\n", ft_sqrt(2147395600));
	printf("le prime :%d", ft_is_prime(2147483647));
	printf("le prime :%d", ft_find_next_prime(2147483647));

}*/