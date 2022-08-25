/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-0-algo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 11:44:54 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/20 11:45:01 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
//#include "ft_str_recup_comb.c"



int puissance(int n, int ex)
{
    if (n != 1)
        return ex*puissance(n - 1, ex);
}
void	ft_var(char a, char b, char c )
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
    int u;
    int d;
    int c;
    int m;

    int i;
    int stop;

    i = puissance(3, 10);
    stop = 4 * i + (4) * i /10; 
    while (i < stop )
    {
        u = (i % 10) ;
		d = (i / 10) % 10 ;
		c = (i / 100) % 10 ;
		m = (i / 1000) % 10 ;
        if (u != d && u != c && u!= m && d != c && d != m && c != m)
        {  
            if(u < 5 && d < 5 && c < 5 && m < 5)
            {
                if(u != 0 && d != 0 && c != 0 && m != 0)
                    printf("la combinaison possible :%d\n", i);
            }
        }i++;
    }
}
int main (void)
{
    ft_print_comb();
}

























	// char	var_1;
	// char	var_2;
	// char	var_3;

	// var_1 = '0';
    // if ( i != n)
    // {
    //     ft_print_comb(n - 1)
    //     while (var_1 <= '7')
    //     {
    //         var_2 = var_1 + 1;
    //         while (var_2 <= '8')
    //         {
    //             var_3 = var_2 + 1;
    //             while (var_3 <= n)
    //             {
    //                 ft_var(var_1, var_2, var_3);
    //                 if (!(var_1 == '7' && var_2 == '8' && var_3 == '9'))
    //                     write(1, ", ", 2);
    //                 var_3++;
    //             }
    //             var_2++;
    //         }
    //         var_1++;
    //     }


