/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:46:50 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/29 13:46:51 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_STOCK_STR_H
# define FT_STOCK_STR_H

typedef struct s_stock_str
{
	int     size;
	char    *str;
	char    *copy;
} t_stock_str;

#endif