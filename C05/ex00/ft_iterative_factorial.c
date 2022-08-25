/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 12:12:52 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/23 12:44:11 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
int	main (int argc, char *argv[])
{
	//int n;

	//n = *argv[1] - '0';
	//printf("%d\n", n);
	if (argc == 2)
		printf("%d\n", ft_iterative_factorial(5));
	return (0);
}
int	main (void)
{
	//int n;

	//n = *argv[1] - '0';
	//printf("%d\n", n);
		printf("%d\n", ft_iterative_factorial(10));
	return (0);
}*/
