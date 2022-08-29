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
		return (1);
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
/*int main(void)
{
	// printf("le sqrt :%d\n", ft_sqrt(2147395600));
	// printf("le prime :%d", ft_is_prime(2147483647));
	printf("le prime :%d", ft_is_prime(1));
	printf("le prime :%d", ft_is_prime(2));
	printf("le prime :%d", ft_is_prime(7853));
	printf("le prime :%d", ft_is_prime(22091));
}*/
