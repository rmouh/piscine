/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mle-bras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 11:19:14 by mle-bras          #+#    #+#             */
/*   Updated: 2022/08/21 17:47:16 by mle-bras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char **tab3_2 (void);
char **tab2_3 (void);
char **tab3_1 (void);
char **tab2_1 (void);
char **tab1_2 (void);
char **tab2_2 (void);


int	ft_strlen(char *str)
{
	int	i;

	while (str[i])
		i++;
	return (i);
}

void	 reboot_col(int index, int **grille)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		grille[i][index] = 0;
		i++;
	}
}

int check_col_full(int index, int **grille)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grille[i][index] == 0)
			return (0);
		i++;
	}
	return (1);
}


int    ft_param3_2(int index, char **tab)
{
	char	**comb;
	int	c;
	int	i;

	comb = tab3_2();
	c = 0;
	i = 0;
	while (i < 3)
	{
		while(c < ft_strlen(comb[i]))
		{
			if (tab[c][index] == comb[i][c] - '0')
				c++;
			else if (tab[c][index] == 0)
			{
				tab[c][index] = comb[i][c] - '0';
				c++;
			}
			else
			{
				c = ft_strlen(comb[i]);
				reboot_col(index, tab);
			}
		}
		if (check_col_full(index, tab) == 1)
			return (1);
		i++;
	}
	return (0);
}


int    ft_param2_3(int index, char **tab)
{
        char    **comb;
        int     c;
        int     i;

        comb = tab2_3();
        c = 0;
        i = 0;
        while (i < 3)
        {
                while(c < ft_strlen(comb[i]))
                {
                        if (tab[c][index] == comb[i][c] - '0')
                                c++;
             	        else if (tab[c][index] == 0)
                        {
                                tab[c][index] = comb[i][c] - '0';
                                c++;
                        }
                        else
                        {
                                c = ft_strlen(comb[i]);
                                reboot_col(index, tab);
                        }
                }
                if (check_col_full(index, tab) == 1)
                        return (1);
                i++;
        }
        return (0);
}

void    ft_param1(int index, int **tab)
{
        if (index < 4)
		tab[0][index] = 4;
        else if (index < 8)
		tab[3][index - 4] = 4;
        else if (index < 12)
		tab[index - 8][0] = 4;
	else
		tab[index - 12][3] = 4;
}

int	ft_str_recup1(*argv[1])
{
	int	i;

	i = 0;
	while (i < 31)
	{
		if ((argv[1][i] == 1))
			ft_param1(i / 2);
	}
	return (i / 2);
}
