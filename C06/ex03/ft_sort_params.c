/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 17:41:12 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/22 20:16:27 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_putchar(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	print(char **c, int argc)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putchar(c[i]);
		write (1, "\n", 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ifswap(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	sort(int argc, char *input[])
{
	int		j;
	int		i;
	char	*temp;

	i = argc - 1;
	while (i > 1)
	{
		j = 2;
		while (j <= i)
		{
			if (ifswap (input[j - 1], input[j]) > 0)
			{
				temp = input[j - 1];
				input[j - 1] = input[j];
				input[j] = temp;
			}
			j++;
		}
		i--;
	}
	print (input, argc);
}
/*
int    main (int argc, char *argv[])
{
	//char *c[20] = {"a.out","ok","wesh","magl","abc","bien","ou","quoi","la,bus"};
	sort(argc, argv);
	return (0);
}*/