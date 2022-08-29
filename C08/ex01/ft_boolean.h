/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:42:55 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/29 11:42:58 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define EVEN(nbr) nbr % 2 == 0
# define TRUE 1
# define FALSE 0
# define SUCCESS 0

# include <unistd.h>

//typedef enum e_bool{FALSE, TRUE}t_bool;
typedef char	t_bool;

#endif