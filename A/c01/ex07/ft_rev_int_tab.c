/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 13:27:40 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/13 18:21:06 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	temp;

	counter = 0;
	while (counter < size / 2)
	{
		temp = tab[counter];
		tab[counter] = tab[size -1 - counter];
		tab[size -1 - counter] = temp;
		counter++;
	}
}
