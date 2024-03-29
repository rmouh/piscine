/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 01:59:57 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/25 01:59:59 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
//#include<stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		range[0] = 0;
		return (0);
	}
	i = 0;
	size = max - min;
	*range = malloc(sizeof(**range) * size);
	if (!range)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
// int main() {
//     int *r;

//   printf("%d", ft_ultimate_range(&r, 5, 9));
//   return 0;
// }
