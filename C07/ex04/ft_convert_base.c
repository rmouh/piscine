/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:54:22 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/25 17:54:24 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	countlen(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int	power(int n, int ex)
{
	if (ex == 0)
		return (1);
	else
		return (n * power(n, ex - 1));
}

int	check(char *base)
{
	int	size;
	int	i;
	int	index;

	i = 0;
	size = countlen(base);
	if (size < 2)
		return (0);
	while (i < size)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < ' ' || base[i] > '~')
			return (0);
		index = i + 1;
		while (index < size)
		{
			if (base[i] == base[index])
				return (0);
			index++;
		}
		i++;
	}
	return (1);
}

int	findindexe(char c, char *baze)
{
	int	i;
	int	basesize;

	basesize = countlen(baze);
	i = 0;
	while (i < basesize)
	{
		if (baze[i] == c)
			return (i);
		i++;
	}
	return (0);
}

int	t_atoi_base(char *str, char *base)
{
	int	basesize;
	int	strsize;
	int	signe;
	int	result;
	int	j;

	result = 0;
	j = 0;
	if (!check (base))
		return (0);
	basesize = countlen(base);
	strsize = countlen(str) - 1;
	if (str[0] == '-')
		signe = -1;
	while (str[j])
	{
		result += (findindexe(str[j], base) * power (basesize, strsize - j));
		j++;
	}
	if (signe == -1)
	result = result * (-1);
	return (result);
}
