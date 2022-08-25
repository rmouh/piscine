/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aloc_n.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:43:17 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/20 17:43:22 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

// void	ft_str_recup4(char *str , int **grille);
// void    ft_param4(int index, int **tab);

int	ft_atoi(char *str)
{
	int	signe;
	int	result;

	signe = 0;
	result = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 45)
			signe++;
		str++;
	}
	while (*str)
	{
		if (*str >= '0' && *str <= '9')
			result = (result * 10) + *str - '0';
		else
			break ;
		str++;
	}
	if (signe % 2 != 0)
	result = result * (-1);
	return (result);
}
