/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 01:36:27 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/27 01:36:29 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include<unistd.h>
#include <stdlib.h>
int	countlen(char *c);
int	t_atoi_base(char *str, char *base);
int	check(char *base);


char	*ft_strcat(char *dest, char src)
{
	int	len;

	len = countlen(dest);
	dest[len] = src;
	dest[len] = 0;
	return (dest);
}

int	ft_nblen (int nb, int size)
{
	if (nb == 0)
		return (1);	
	int	i;

	i = 0;
	while (nb != 0)
	{
		nb /= size;
		i++;

	}
	return (i);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	int	size;
	int i;
	int	idx;
	char	*c;
	unsigned int nb;

	nb = -(nbr < 0) * nbr + (nbr > 0) * nbr;
	idx = (nbr < 0);
	size = countlen(base);
	i = ft_nblen(nbr, size) + (nbr < 0);
	c = malloc(sizeof(char) * (i + 1));
		if(!c)
			return (0);
	c[i] = 0;
	if (nbr < 0)
		c[0] = '-';
	i--;
	while (i >= idx)
	{
		c[i] = base[nb % size];
		nb /= size;
		i--;
	}
	return (c);
}
char    *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
    if(check(base_from) && check(base_to)){
        printf("%s\n", "le truc ");
        return (ft_putnbr_base(t_atoi_base(nbr, base_from), base_to));
    }
    else
        return (0);
}
int main(int argc, char **argv)
{
	(void)argc;
    printf("la conversion %s",ft_convert_base(argv[1],argv[2],argv[3]));
}