/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:51:53 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/16 15:01:52 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>

unsigned int	lenstr(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	leng;
	unsigned int	i;

	leng = lenstr(src);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < size)
	{
		dest[i] = '\0';
		i++;
	}
	return (leng);
}
/*int	main(void)
{
	char	d[15];
	int	tin;
	char	d2[15];

	tin = strlcpy(d, "teste4", 5);
	printf("\ntin = %d\n",tin);
	printf("strcpy == %s", d);
//////////////////////////////////////////////////
	tin = ft_strlcpy(d2, "TESTE5", 5);
	printf("\ntin = %d\n",tin);
	printf("\nstrlcpy == %s",d2);
	return (0);
}*/
