/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:11:20 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/17 20:31:06 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
#include<bsd/string.h>

int	countlen(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

int	countlen2(char *dest, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (dest[i] && i < size)
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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	size_d;
	unsigned int	size_s;
	unsigned int	temp;

	size_s = countlen(src);
	size_d = countlen2(dest, size);
	if (size_d == size)
		return (size_s + size_d);
	else
	{
		temp = size - size_d;
		dest = ft_strncat (dest, src, temp - 1);
		return (size_d + size_s);
	}
}
/*
int	main(void ){
	char source[]="12346789";
	char destination[]="gg";
	char source1[]="12346789";
    char destination2[]="gg";

	printf("la taille est ;%ld\n",strlcat (destination2, source1, 10));
	printf("%s\n",destination2);

	printf("la taille est ;%d\n",ft_strlcat (destination, source, 10));
	printf("%s\n",destination);

		char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s1b[10] = "Test1";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[] = "Size";
	char s3b[10] = "Same";
	char s4b[] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";
	char s7a[20] = "Shorter";
	char s8a[] = "ThanMyself";
	char s7b[20] = "Shorter";
	char s8b[] = "ThanMyself";
	char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
printf("%d-", ft_strlcat(test, "asdf", 16));
printf("%s\n", test);
printf("%d-", ft_strlcat(test, "asdf", 6));
printf("%s\n", test);
printf("%d-", ft_strlcat(test, "asdf", 4));
printf("%s\n", test);
printf("%d-", ft_strlcat(test, "", 16));
printf("%s\n", test);
printf("%d-", ft_strlcat(test, "asdf", 0));
printf("%s\n", test);
	char test2[256] = "\0zxcvzxcvzxcvxzcvzxcv";

printf("%ld-", strlcat(test2, "asdf", 16));
printf("%s\n", test2);
printf("%ld-", strlcat(test2, "asdf", 6));
printf("%s\n", test2);
printf("%ld-", strlcat(test2, "asdf", 4));
printf("%s\n", test2);
printf("%ld-", strlcat(test2, "", 16));
printf("%s\n", test2);
printf("%ld-", strlcat(test2, "asdf", 0));
printf("%s\n", test2);

	printf("%s\n", ft_strlcat(s1a, s2a, 6) == strlcat(s1b, s2b, 6)
	 ? "Success" : "Fail");
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? 
	"Success" : "Fail");
	printf("%s\n", ft_strlcat(s3a, s4a, 10) == strlcat(s3b, s4b, 10) 
	? "Success" : "Fail");
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? 
	"Success" : "Fail");
	printf("%s\n", ft_strlcat(s5a, s6a, 4) == strlcat(s5b, s6b, 4) ?
	 "Success" : "Fail");
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? 
	"Success" : "Fail");
	printf("%s\n", ft_strlcat(s7a, s8a, 0) == strlcat(s7b, s8b, 0) ? 
	"Success" : "Fail");
	printf("%s\n", strcmp(s7a, s7b) == 0 && strcmp(s8a, s8b) == 0 ? 
	"Success" : "Fail");
}
*/