/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 10:05:00 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/21 10:05:04 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_doublant1_4_l1(char *str);
int ft_doublant1_4_l2(char *str);
int ft_doublant1_4_r1(char *str);
int ft_doublant1_4_r2(char *str);

int ft_count(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
    return (i);
}

int ft_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
    {
        if (i % 2 == 0 && (str[i] > '4' || str[i] < '1'))
            return (0);
        if (i % 2 != 0 && str[i] != ' ' )
            return (0);
		i++;
    }
    return (1);
}

int ft_somme(char *str)
{
    int i;
    int result;

    result = 0;
    i = 0;
    while (i < 7)
    {
        result = (str[i] -'0') + (str[i + 8] - '0');
        if (result > 5 || result < 3)
            return (0);
        i = i + 2; 
    }
    while (i > 15 && i < 23)
    {
        result = (str[i] - '0') + (str[i + 8]- '0');
        if (result > 5 || result < 3)
            return (0);
    }
    return (1);

}

int ft_check(char *str)
{
    int size;

    size =  ft_count(str);
    if (size != 31)
        return (0);
    else if (!ft_numeric(str))
        return (0);
    else if (!ft_somme(str))
        return (0);
    else if (!ft_doublant1_4_l1(str)) 
        return (0);
    else if (!ft_doublant1_4_l2(str)) 
        return (0);
    else if (!ft_doublant1_4_r1(str)) 
        return (0);
    else if (!ft_doublant1_4_r2(str)) 
        return (0);
    else
        return (1);
}

