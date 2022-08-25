/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:16:10 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/23 13:29:14 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 || (power == 0 && nb == 0))
		return (1);
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/*int	main (void)
{
	printf("%d\n", ft_iterative_power(-5, 9));	
	printf("%d\n", ft_iterative_power(0, 0));
	printf("%d\n", ft_iterative_power(45, 0));
	printf("%d\n", ft_iterative_power(0, 9));
	printf("%d\n", ft_iterative_power(5, 3));
}*/
