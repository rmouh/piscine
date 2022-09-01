
#include<stdio.h>
int max(int *tab, unsigned int len )
{
    unsigned int i;
    int temp;

    if (len ==0)
        return (0);
    temp = tab[0];
    while(i < len - 1)
    {
        if (tab[i+1] > temp)
            temp = tab[i + 1];
        i++;
    }return (temp);
}