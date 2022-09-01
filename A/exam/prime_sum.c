#include <stdio.h>
#include <unistd.h>

long int is_prime(int n)
{
    long int i;

    (long)n;
    if (n == 2)
        return (1);
    if (n <= 1 || n % 2 == 0)
        return (0);
    i = 3;
    while (i * i <= n)
    {
        if (n % i == 0)
            return (0);
        i+=2;
    }
    return (1);
}

long int prime_sum(int nb)
{
    int i;
    long int    result;
    
    (long)nb;
    result = 0;
    i = 0;
    while (i <= nb)
    {
        if (is_prime(i))
            result+= i;
        i++;
    }
    return (result);
}

void itoa(int n)
{
    int i;
    char c;

    if (n < 0)
    {
        write(1, "-", 1);
        n*= (-1);
    }
    if (n / 10 > 0)
        itoa( n / 10);
    c = n % 10 + '0';
    write (1,&c, 1);

}
int atoi(char *c)
{
    int i;
    int signe;
    int result;

    i = 0;
    signe = 1;
    result = 0;
    if (c[0] == '-')
    {
        c++;
        signe = -1;
    }
    while (c[i])
    {
        result =result * 10 + c[i] - '0';
        i++;
    }
    return (result * signe);

}
int main(int argc, char *argv[])
{
    printf("%ld",prime_sum(2147483647));
    //printf("%ld",is_prime(1999)) ;
    //itoa(1);

}