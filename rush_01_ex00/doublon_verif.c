/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doublon_verif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:38:22 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/21 11:38:25 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_doublant1_4_l1(char *str)
{
    int i;
    int counter1;
    int counter2;

    i = 0;
    counter1 = 0;
    counter2 = 0;
    while (i < 7)
    {
        if (str[i] == '1')
        {
            counter1++;
            i++;
        }
        if (str[i] == '4')
        {
            counter2++;
            i++;
        }
        i++;
    }
    if (counter1 > 1 || counter2 > 1)
        return (0);
    return (1);
}

int ft_doublant1_4_l2(char *str)
{
    int i;
    int counter1;
    int counter2;

    i = 8;
    counter1 = 0;
    counter2 = 0;
    while (i > 7 && i < 15)
    {
        if (str[i] == '1')
        {
            counter1++;
            i++;
        }
        if (str[i] == '4')
        {
            counter2++;
            i++;
        }
        i++;
    }
    if (counter1 > 1 || counter2 > 1)
        return (0);
    return (1);
}

int ft_doublant1_4_r1(char *str)
{
    int i;
    int counter1;
    int counter2;

    i = 16;
    counter1 = 0;
    counter2 = 0;
    while (i > 15 && i < 23 )
    {
        if (str[i] == '1')
        {
            counter1++;
            i++;
        }
        if (str[i] == '4')
        {
            counter2++;
            i++;
        }
        i++;
    }
    if (counter1 > 1 || counter2 > 1)
        return (0);
    return (1);
}

int ft_doublant1_4_r2(char *str)
{
    int i;
    int counter1;
    int counter2;

    i = 24;
    counter1 = 0;
    counter2 = 0;
    while (i > 23 && i < 31)
    {
        if (str[i] == '1')
        {
            counter1++;
            i++;
        }
        if (str[i] == '4')
        {
            counter2++;
            i++;
        }
        i++;
    }
    if (counter1 > 1 || counter2 > 1)
        return (0);
    return (1);
}