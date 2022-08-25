/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 15:13:31 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/17 18:08:38 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	j;
	int	i;
	int	var;

	i = 0;
	if (!*to_find)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			var = i;
			while (str[var] == to_find[j])
			{
				j++;
				if (!to_find[j])
					return (&str[i]);
				var++;
			}
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char	*s="heyolloyo";
	char	*f="";
	printf("le resltat:%s ",ft_strstr(s, f));
	
	char s1a[] = "This is Ooo for nOOoook";
	char s2a[] = "k";
	char s1b[] = "This is Ooo for nOOoook";
	char s2b[] = "k";
	char s3a[] = "Same";
	char s4a[] = "";
	char s3b[] = "Same";
	char s4b[] = "";
	char s5a[] = "Shorter";
	char s6a[] = "Than";
	char s5b[] = "Shorter";
	char s6b[] = "Than";

printf("%p\n", ft_strstr("asdf qwerty", "qwerty"));
printf("%p\n", ft_strstr("", "wer"));
printf("%p\n", ft_strstr("asdf qwerty", "zxcv"));
printf("%p\n", ft_strstr("asdf qwerty", ""));
	printf("%s:%s\n", ft_strstr(s1a, s2a), strstr(s1b, s2b));
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) 
	== 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b)
	== 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strstr(s4a, s6a), strstr(s4b, s6b));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) 
	== 0 ? "Success" : "Fail");
 }

*/