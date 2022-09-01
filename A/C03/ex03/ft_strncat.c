/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 14:58:52 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/17 15:12:02 by rmouhoub         ###   ########.fr       */
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

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	len;
	unsigned int	i;

	i = 0;
	len = countlen(dest);
	if (nb == 0 || countlen(src) == 0)
		return (dest);
	while (nb != 0 && src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
		nb--;
	}
	dest[len] = 0;
	return (dest);
}
/*int	main(void)
{
	char c[11] = "123456";
	char d[11] = "123456";
	char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s1b[10] = "Test1";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[10] = "Size";
	char s3b[10] = "Same";
	char s4b[10] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";

	printf ("the resultd;%s ", ft_strncat(c, "hougtwsrg",3));
	printf ("the resufgdfltd %s ; ", strncat(d, "housgdrg",3));
	printf("%s:%s\n", ft_strncat(s1a, s2a, 5), strncat(s1b, s2b, 5));
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "
	Success" : "Fail");
	printf("%s:%s\n", ft_strncat(s3a, s4a, 10), strncat(s3b, s4b, 10));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ?  
	"Success" : "Fail");
	printf("%s:%s\n", ft_strncat(s5a, s6a, 0), strncat(s5b, s6b, 0));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? 
	"Success" : "Fail");
}

*/