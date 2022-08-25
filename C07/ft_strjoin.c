/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 11:27:48 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/25 11:27:52 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	countlen(char *c)
{
	int	i;

	i = 0;
	while (*c++)
		i++;
	return (i);
}

char	*strempty(void)
{
	char	*c;
	
	c = malloc (sizeof(char));
	c = NULL;
	return (c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int	counter;
	int	j;

	j = 0;
	counter = 0;
	if (size == 0)
		return (strempty());
	counter = (size * 2);
	tab = malloc (counter * sizeof(char*));
		while (j < size)
		{
			tab[j * 2] = strs[j];
			if ((j * 2) % 2 == 0)
			{
				tab[(j * 2) + 1] = *sep;
			}
			j++;
		}
		tab[counter - 1] = 0;
		return (tab);
}

int	main (int argc, char *argv[])
{
	char *c[10] = {"tata","toto","titi"};
	printf ("%s\n", ft_strjoin (3, c, "labus"));
}
