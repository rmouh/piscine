#include<unistd.h>

int srtlen(char *c)
{
    int i;

    i = 0;
    while(c[i])
        i++;
    return (i);
}

char *ft_rev(char *c)
{
    int i;
    int k;
    char c;


    i = strlen(c) - 1;
    k= 0;
    while (k < i / 2)
    {
        temp = c[k];
        c[k]= c[i];
        c[i]= temp;
        k++;
        i--;
    }
    return (c);
}