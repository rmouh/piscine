/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:21:39 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/16 22:44:01 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
//#include<stdio.h>

char	*to_hexa(int n, char *tab, int index)
{
	if (index > 0)
		to_hexa(n / 16, tab, index - 1);
	tab[index] = "0123456789abcdef"[n % 16];
	return (tab);
}

/*char	*toHex(int n, int base, char *tab, int index)
{
	if (index > 0)
		toHex(n/16, base, tab, index - 1);
	tab[index] = "0123456789abcdef"[n % 16];
	return (tab);
}*/

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*temph;
	char	tab[3];

	i = 0;
	while (str[i])
	{
		if (str[i] >= 32 && str[i] <= 126)
			write (1, &str[i], 1);
		else
		{
			write(1, "\\", 1);
			temph = to_hexa(str[i], tab, 1);
			write(1, temph, 2);
		}
		i++;
	}
}
/*
int main (void)
{
	char t[3];
	//t[2]='\0';
	printf("le chiffre en hexadecimal; %s", to_hexa(127, t, 1));

	ft_putstr_non_printable("Coucou\ntu vas bien ?");
}*/
