/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:58:43 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/17 14:52:52 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	countlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
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
	dest[len] = 0;
	return (dest);
}
/*
int	main(void)
{
	char c[11] = "123456";
printf ("the resultd;%s ", ft_strcat(c, "hou"));
printf ("the resultd %s ; ", strcat(c, "hou"));
}
*/
