/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:30:54 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/29 13:30:56 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
#include<stdio.h>

void set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}
int main(void)
{
    t_point point;
    set_point(&point);
    printf("%ld\n", point.x);
    printf("%ld\n", point.y);
return (0);
}
