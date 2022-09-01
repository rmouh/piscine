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
//#include <stdio.h>

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
	if (!c)
		return (0);
	c[0] = '\0';
	return (c);
}

void	ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	i = 0;
	len = countlen(dest);
	while (src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tab;
	int		counter;
	int		j;

	j = 0;
	counter = 0;
	if (size == 0)
		return (strempty());
	while (strs[j])
		counter += countlen(strs[j++]);
	counter += countlen(sep) * (size - 1);
	tab = malloc ((counter + 1) * sizeof(char));
	if (!tab)
		return (0);
	tab[0] = '\0';
	j = 0;
	while (j < size)
	{
		ft_strcat (tab, strs[j]);
		if (j < size - 1)
			ft_strcat (tab, sep);
		j++;
	}
	tab[counter] = 0;
	return (tab);
}

// int	main (int argc, char **argv)
// {
// 	char *r;
// 	r = ft_strjoin (argc - 1, argv + 1, " /labus/ ");
// 	printf("%s\n", r);
// 	free (r);
// }