/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 13:30:35 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/23 13:47:50 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index > 46)
		return (0);
	if (index == 46)
		return (1836311903);
	else
	{
		if (index == 0)
			return (0);
		if (index == 1 || index == 2)
			return (1);
		return (ft_fibonacci (index - 1) + ft_fibonacci (index - 2));
	}
}
/*
int	main(void)
{
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(0));
	printf("%d\n", ft_fibonacci(1));
	printf("%d\n", ft_fibonacci(46));
	printf("%d\n", ft_fibonacci(-2));
	return (0);
}
*/