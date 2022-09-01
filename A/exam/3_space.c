#include <stdio.h>
#include<unistd.h>

void no_sp(char *str)
{
    int i;

    i = 0;

    while (*str < 33 || *str > 126)
        str++;
    while (str[i])
    {
        if (str[i] < 33 || str[i] > 126)
            i++;
        if (str[i] > 32 && str[i] < 127 )
        {
            if((str[i - 1] < 33 || str[i - 1] > 126) && i != 0) 
                write (1, "   ", 3);
            write (1, &str[i], 1);
            i++;
        }
    }
}
int main (int argc, char *argv[])
{
    no_sp(argv[1]);
}