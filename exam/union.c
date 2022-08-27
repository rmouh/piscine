/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 22:06:41 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/25 22:06:44 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<unistd.h>

char *strcat(char *dest, char *src)
{
    int i;

    i = 0;
    while (*dest)
        dest++;
    while (*src)
        dest[i++] = *src++;
    dest[i] = 0;
    return (dest);
}
int	countlen(char *c)
{
	int	i;

	i = 0;
	while (*c++)
		i++;
	return (i);
}

int ifdouble(char *c, char ca, int index)
{
    int i = 0;

    while (index > i)
    {
        if (c[i] == ca)
            return (0);
        i++;
    }
    return (1);
}


void    unionn(char *c1, char *c2)
{
    int size;
    int     i;

    i = 0;
    size = countlen(c1);
    while (c1[i])
    {
        if (ifdouble(c1, c1[i], i))
            write (1, &c1[i], 1);
        i++;
    }
    i = 0;
    while (c2[i])
    {
        if (ifdouble(c2, c2[i], i) && ifdouble(c1, c2[i], size))
            write (1, &c2[i], 1);
        i++;
    }
    write (1, "\n", 1);
}
int main(int argc, char *argv[])
{
    unionn(argv[1], argv[2]);

}