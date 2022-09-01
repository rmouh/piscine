/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 23:23:31 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/16 23:50:46 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	i = 0;

	while (s1[i])
	{
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		return (s1[i] - s2[i]);
		i++;
	}
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int main(void)
{
	printf ("the result %d ; ", strcmp("rtytytytyty", "ifsfsd"));
	printf ("the result %d ; ", strcmp("u", "u"));
	printf ("the result %d ; ", strcmp("uytytytyty", "j,hjhhj,,mn,bj"));

	printf ("the result %d ; ", ft_strcmp("rtytytytyty", "ifsfsd"));
	printf ("the result %d ; ", ft_strcmp("u", "u"));
	printf ("the result %d ; ", ft_strcmp("uytytytyty", "j,hjhhj,,mn,bj"));
	return (0);
}
*/
