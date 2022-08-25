/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 17:57:19 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/11 12:47:15 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_var(char a, char b, char c )
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	var_1;
	char	var_2;
	char	var_3;

	var_1 = '0';
	while (var_1 <= '9')
	{
		var_2 = var_1 + 1;
		while (var_2 <= '9')
		{
			var_3 = var_2 + 1;
			while (var_3 <= '9')
			{
				ft_var(var_1, var_2, var_3);
				if (!(var_1 == '7' && var_2 == '8' && var_3 == '9'))
					write(1, ", ", 2);
				var_3++;
			}
			var_2++;
		}
		var_1++;
	}
}
