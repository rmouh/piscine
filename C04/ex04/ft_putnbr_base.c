/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:20:06 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/18 21:01:06 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include<unistd.h>

int	base_size(char *b)
{
	int	i;

	i = 0;
	while (b[i])
		i++;
	return (i);
}

int	check(char *base)
{
	int	size;
	int	i;
	int	index;

	i = 0;
	size = base_size(base);
	if (size < 2)
		return (0);
	while (i < size)
	{
		if (base[i] == '+' || base[i] == '-' || base[i] < ' ' || base[i] > '~')
			return (0);
		index = i + 1;
		while (index < size)
		{
			if (base[i] == base[index])
				return (0);
			index++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			size;
	long int	temp;

	temp = nbr;
	if (!check(base))
		return ;
	if (temp < 0)
	{
		temp = temp * (-1);
		write(1, "-", 1);
	}
	size = base_size(base);
	if (temp / size > 0)
		ft_putnbr_base(temp / size, base);
	write(1, &base[temp % size], 1);
}
/*int		main(void)
{
	write(1, "42:", 3);
	ft_putnbr_base(2147483647, "0123456789");
	write(1, "\n2a:", 4);
	ft_putnbr_base(42, "0123456789abcdef");
	write(1, "\n-2a:", 5);
	ft_putnbr_base(-42, "012345678  bcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "0");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "+-0123456789abcdef");
	write(1, "\n:", 2);
	ft_putnbr_base(42, "\t0123456789abcdef");

}
*/