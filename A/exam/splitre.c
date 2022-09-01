#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_sep(char c, char *charset)
{
    int i = 0;

    while (charset[i])
    {
        if (c == charset[i])
            return (1);
        i++;
    }
    return (0);
}

int word_counter(char *c, char *charset)
{
    int counter;
    int i;

    counter = 0;
    while (c[i])
    {
        while (c[i] && is_sep(c[i], charset))
            i++;
        if (!is_sep(c[i], charset))
            counter++;
        while (c[i] && !is_sep(c[i], charset))
            i++;
    }
    return (counter);
}


char *fil_in(char *src, char *charset, int *i)
{
    int i2;
    int k;

    char *temp;

    i2 = 0;
    k = 0;
    while (src[*i] && is_sep(src[*i], charset))
        (*i)++;
    while (src[*i + i2] && !is_sep(src[*i + i2], charset))
        i2++;
    temp = malloc (sizeof(char) * (i2 + 1));
    if (!temp)
        return (0);
    while ( k < i2)
    {
        temp[k] = src[*i];
        (*i)++;
        k++;
    }
    temp [k] = 0;
    return (temp);
}

char **split (char *str, char *charset)
{
    int i;
    int k;
    int size;
    char **dest;

    i = 0;
    k = 0;
    while (str[i] && is_sep(str[i], charset))
        i++;
    size = word_counter(str, charset);
    dest = malloc (sizeof(char*) * (size + 1));
    if (!dest)
        return (0);
    while (k < size)
    {
        dest[k] = fil_in(str, charset, &i);
        k++;
    }
    dest[k] = 0;
    return (dest);

}
int main(int argc, char *argv[])
{
    char **r;
    int i;
    (void)argc;
    i = 0;
    r = split (argv[1], argv[2]);
    while (r[i])
    {
        printf("%s\n", r[i]);
        i++;
    }
}