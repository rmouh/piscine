/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 13:29:48 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/26 13:29:54 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

int exist(char *c, char ca)
{
    int i=0;
    while (c[i])
    {
        if (ca == c[i])
            return (1);
        i++;
    }
    return (0);
}

int notexist(char *c, char ca, int index)
{
    int i=0;
    while (i < index)
    {
        if (ca == c[i])
            return (0);
        i++;
    }
    return (1);
}

void inter (char *c1, char *c2)
{
    int i = 0;

    while (c1[i])
    {
        if (exist(c2, c1[i]) && notexist(c1, c1[i], i))
            write(1, &c1[i], 1);
        i++;
    }
    write (1, "\n", 1);
}
int main (int argc, char *argv[])
{
    inter(argv[1], argv[2]);
}