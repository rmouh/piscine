/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmouhoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 19:07:28 by rmouhoub          #+#    #+#             */
/*   Updated: 2022/08/29 19:07:32 by rmouhoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include<stdio.h>
int is_sep(char c, char *sep)
{
    while (*sep)
    {
        if (c == *sep)
            return (1);
        sep++; 
    }
    return (0);

}

char **ft_split(char *str, char *charset)
{
    int i;
    int sep_counter;
    int word_counter;
    char    **dest;
    int j;

    i = 0;
    sep_counter = 0; 
    while (is_sep(*str, charset))
        str++;
    while (str[i])
    {
        if (is_sep(str[i], charset))//replace de chrset
            str[i] ='\t';
        i++;
    }
    i = 0;
    while (str[i])
    {

        if (is_sep(str[i], charset) && !is_sep(str[i - 1], charset)) //count the words
            sep_counter++;
        i++;
    }
    dest = malloc (sizeof(char *) * (sep_counter + 1));
    i = 0;
    j = 0;
    sep_counter = 0;
    while (str[i])
    {
        while (!(is_sep(str[i], charset))) //count the size of thewords
        {
            word_counter++;
            i++;
        }
        dest[j] = malloc (sizeof(char) * (sep_counter ));//sans +1
        j++;
        word_counter = 0;
    }
    i = 0;
    j = 0;
    while (j < sep_counter)
    {
        while (!(is_sep(str[i], charset)))
        {
            dest[j][i] = str[i];//puting in th table
            i++;
        }
        j++;
        while (is_sep(str[i], charset))
            i++;
    }
    return (dest);



}
int main(int argc, char *argv[])
{
    char **dest;
    (void)argc;
    dest = ft_split(argv[1], argv[2]);
    printf("%s", dest[0]);
}