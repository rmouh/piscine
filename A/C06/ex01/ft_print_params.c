/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 13:09:21 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/19 13:18:57 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	put_str(char *str)
{
	while (*str)
		write (1, str++, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{	
		put_str (argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
