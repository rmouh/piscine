/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 10:33:33 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/20 10:33:39 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void    ft_param4(int index, int **tab);
void	ft_str_recup4(char *str , int **grille);
int     ft_check(char *str);
void    free_t(int **grille);
{
    int i;

    i = 0;
    while ( i < 4)
    {
        free(grille[i]);
        i++;
    }free(grille);
}
void affiche(int **grille, int n)
{
    int i;
    int j;


    while (i < n)
    {
        j = 0;
        while (j < n)
        {
            temp =grille[i][j] +'0';
            write(1, &temp,1 );
            write(1, "   ",3 );
                j++;
        }
        write(1, "\n",1 );
        i++;
    }

}

int **alloc_tab(int ligne, int col)
{
    int counter;
    int i;

    counter = 0;
    i = 0;
    int **tab = malloc(ligne * sizeof(int*));
    while (counter < col)
    {
        tab[counter] = malloc(col * sizeof(int));
        while (i < 4 )
        {
            tab[counter][i] = 0;
            i++;
        }
        counter++;
    }
    return (tab);

}


int main (int argc, char *argv[])
{

    int n;
    int **grille_f;

    n = 0;
    if (argc == 2 && ft_check(argv[1]))
    {
        grille_f = alloc_tab(4, 4);
        affiche(grille_f, 4);
        ft_str_recup4(argv[1], grille_f);
        back_tracking(argv[1],grille_f, n);
        if (verif(argv[1], grille_f))
            affiche(grille_f, 4);
    }
    else
        write(1, "Error\n", 6);
    free_t(grille_f);
    return (0);
}