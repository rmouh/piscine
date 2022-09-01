/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:56:19 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/20 18:56:22 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<unistd.h>
#include<stdio.h>


 int **alloc_tab(int ligne, int col);

 void    ft_param4(int index, int **tab)
 {
         int     i;
         int     j;
         i = 0;
         if (index < 4)
         {
                 while (i < 4)
                 {
                         tab[i][index] = i + 1;
                         i++;
                 }
         }
         else if (index < 8)
         {
 			    i = 3;
         		j = 0;
                 while(i > 0)
                 {
                         tab[i][index - 4] = j + 1;
                         i--;
                         j++;
                 }
         }
         else if (index < 12)
         {
 			    i = 0;
         		j = 0;
                 while(i < 4)
                 {
                         tab[index - 8][i] = j + 1;
                         i++;
 						j++;
                 }
         }
         else
         {
 			i = 3;
         	j = 0;
                 while(i >= 0)
                 {
                         tab[index - 12][i] = j + 1;
                         i--;
                 }
         }

 }
char **tab3_2 (void)
{
    char **t3;
    t3 = malloc (3 * sizeof(char**));
    t3[0] ="1243";
    t3[1] ="1342";
    t3[2] ="2341";
    return (t3);
}
char **tab3_1 (void)
{
    char **t3;
    t3 = malloc (3 * sizeof(char**));
    t3[0] ="1324";
    t3[1] ="2314";
    t3[2] ="2134";
    return (t3);
}

char **tab2_2 (void)
{
    char **t3;
    t3 = malloc (3 * sizeof(char**));
    t3[0] ="1423";
    t3[1] ="2143";
    t3[2] ="2413";
    return (t3);
}
char **tab2_1 (void)
{
    char **t3;
    t3 = malloc (2 * sizeof(char**));
    t3[0] ="3214";
    t3[1] ="3124";
    return (t3);
}