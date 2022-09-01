/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_recup_comb.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrabourd <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 14:53:37 by mrabourd          #+#    #+#             */
/*   Updated: 2022/08/20 16:54:48 by mrabourd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	ft_param2_3(int index, int **str);
void    ft_param4(int index, int **str);


void	ft_str_recup4(char *str, int ** str)
{
	int	i;

	i = 0;
	while (i < 32)
	{
		if (str == '4')
		{	
			ft_param4((i / 2), str);
		}
		i++;
	}
}

void	ft_str_recup2_3(char *str )
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if ((str == '2') && (str[i + 8] == '3')){
			ft_param2_3(i / 2);
		}else if ((str == '3') && (str[i + 8] == '2'))
		{
			ft_param3_2(i / 2);
		}
		i++;
	}
	while (i > 15 && i < 32)
	{
		if ((str == '2') && (str[i + 8] == '3')){
			ft_param2_3(i / 2); 
		}else if ((str == '3') && (str[i + 8] == '2')){
			ft_param3_2(i / 2);
		}i++;
	}
}

int    pick_comb(char *str, int **str, n)
{
	if ((str[n] == '1') && (str[n + 8] == '3'))
		return (ft_param1_3(i / 2, grille));
	else if ((str [n]== '3') && (str[n + 8] == '1')
		return (ft_param3_1(i / 2, grille));
	else if ((str[n] == '1') && (str[n + 8] == '2')
		return (ft_param1_2(i / 2, grille));
	else if ((str[n] == '2') && (str[n + 8] == '1')
		return (ft_param2_1(i / 2, grille));
	else if ((str[n] == '2') && (str[n + 8] == '2')
		return (ft_param2_2(i / 2, grille));
		
	
}

int	siremplie(int **grille)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (grille[i][j] == 0)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
void     vide_colonne(int index, int **grille)
{
        int     i;

        i = 0;
        while (i < 4)
        {
                grille[i][index] = 0;
                i++;
        }
}

int 	back_tracking(char *str,char **grille, int n )
{
	if (!verif2(grille))
			return (0);
	if(siremplie(grille))
		return (verif (str, grille)); 
	while (1)
	{
		if (!pick_comb(str, grille, n))
			break ;
		if (back_tracking(str,grille, n + 2))
			return (1);
	}
	vide_colonne(n, grille);
	return 0;
}

int verif2(char **grille)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while(j < 3 && grille[i][j] != 0){
			if grille[i][j] == grille[i][j+1]
				return(0);
			j++;
		}
		i++;
	}return (1);
}

int	verif(char *str, char **grille)
{
	int	var_l;
	int	var_r;
	int	i;
	int	j;
	int	indice;

	indice = 16;
	var_l = 0;
	var_r = 0;
	i = 0;
	while (i < 4 && indice < 23)
	{
		j = 0;
		while (j < 4)
		{
			if (grille[i][j + 1] > grille[i][j])
				var_l++;
			if (grille[i][3 - j + 1] > grille[i][3 - j])
				var_r++;
			j++;
			if (var_l != str[indice] - '0' || var_r != str[indice + 8] - '0' )
				return (0);
		}
		i++;
		indice+=2;
	}
	return (1);
}
int	ft_str_recup1_2(*str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if ((str[i] == 1) && (str[i + 8] == 2))
			ft_param1_2(i / 2);
		else if ((str[i] == 2) && (str[i + 8] == 1))
			ft_param2_1(i / 2);
		i++;
	}
	while (i > 15)
	{
		if ((str == 1) && (str[i + 8] == 2))
			ft_param1_2(i / 2);
		else if ((str == 2) && (str[i + 8] == 1))
			ft_param2_1(i / 2);
		i++;
	}
	return (i / 2);
}

int	ft_str_recup2_2(*str)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if ((str == 2) && (str[i + 8] == 2))
			ft_param2_2(i / 2);
		i++;
	}
	while (i > 15)
	{
		if ((str == 2) && (str[i + 8] == 2))
			ft_param2_2(i / 2);
		i++;
	}
	return (i / 2);
}

// int	main(int argc, char **str)
// {
// 	int ** str = 
// 	if (argc == 2){
// 		ft_str_recup2_3(str);
// 		ft_str_recup4(str);
// 	}
// 	return (0);
// }
