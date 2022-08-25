/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 22:07:41 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/24 22:07:44 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*tab;
	int	i;

	if (min >= max)
		return (0);
	i = 0;
	size = max - min;
	tab = malloc (size * sizeof(int));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}

/*
int main(void)
{
	int i= 0;
	int *c =  ft_range(-5, 5);
	//int     i;
	while (i < 10)
	{
		printf("le tab: %d", c[i]);
		i++;
	}
}*/