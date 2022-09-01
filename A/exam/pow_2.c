#include<stdio.h>

int power_02 (int nb)
{
    int i;
    i = 2;

    if (nb <0)
        return (0);
    while(i <= nb)
    {
        if (i == nb)
            return (1);
        i *=2;
    }
    return (0);.
}