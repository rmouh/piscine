/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:07:28 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/29 19:07:32 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include<stdio.h>

int	is_sep(char c, char *sep)
{
	while (*sep)
	{
		if (c == *sep)
			return (1);
		sep++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	sep_counter;

	sep_counter = 0;
	i = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset) && !is_sep(str[i - 1], charset))
			sep_counter++;
		i++;
	}
	if (sep_counter == 0)
		return (1);
	if (!is_sep(str[i - 1], charset))
		sep_counter++;
	return (sep_counter);
}

int	mal_str(char *str, char **dest, char *charset)
{
	int	i;
	int	j;
	int	word_counter;

	i = 0;
	j = 0;
	while (str[i])
	{
		word_counter = 0;
		while (!(is_sep(str[i], charset)) && str[i])
		{
			word_counter++;
			i++;
		}
		dest[j] = malloc (sizeof(char) * (word_counter + 1));
		if (!dest[j])
			return (0);
		j++;
		while (is_sep(str[i], charset) && str[i])
			i++;
	}
	return (1);
}

char	**fil_str(int sep_counter, char **dest, char *charset, char *str)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	while (j < sep_counter)
	{
		k = 0;
		while (!(is_sep(str[i], charset)) && str[i])
		{
			dest[j][k] = str[i];
			i++;
			k++;
		}
		dest[j][k] = '\0';
		j++;
		while (is_sep(str[i], charset) && str[i])
			i++;
	}
	dest[sep_counter] = 0;
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	int		sep_counter;
	char	**dest;
	int		real_size;

	while (is_sep(*str, charset))
		str++;
	sep_counter = count_words(str, charset);
	real_size = sep_counter;
	dest = malloc (sizeof(char *) * (sep_counter + 1));
	if (!dest)
		return (0);
	if (real_size == 1 && *str == '\0')
	{
		dest[0] = NULL;
		return (dest);
	}
	mal_str(str, dest, charset);
	return (fil_str(sep_counter, dest, charset, str));
}

// int main(int argc, char *argv[])
// {
// 	(void)argc;
// 	int i = 0;
// 	char **dest;
// 	dest = ft_split(argv[1], argv[2]);
// 	while (dest[i])
// 	{
// 		printf("%s\n", dest[i]);
// 		i++;
// 	}
// 	return (0);
//  }
