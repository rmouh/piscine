/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 21:02:42 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/24 21:02:44 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	countlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*c;

	i = 0;
	size = countlen (src) + 1;
	c = malloc (size * sizeof(char));
	if (!c)
		return (0);
	while (src[i])
	{
		c[i] = src[i];
		i++;
	}
	c[i] = 0;
	return (c);
}
/*
int main (int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("le dup %s\n",ft_strdup(argv[1]));
		
	}

}
*/