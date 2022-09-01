/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 12:14:05 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/16 12:50:31 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (str[i - 1] < '0' || str[i - 1] > '9')
				if (str[i - 1] < 'a' || str[i - 1] > 'z')
					if (str[i - 1] < 'A' || str[i - 1] > 'Z')
						str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
