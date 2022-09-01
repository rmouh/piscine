

int exsits(char c, char *re)
{
    int i; 

    i = 0;
    while (re[i])
    {
        if (c == re[i])
            return (1);
        i++;    
    }
    return (0);

}
size_t ft_strcspn(const char *s, const char *reject)
{
    int     i;
    int counter;

    counter = 0;
    i = 0;
    while (s[i] && !exists(s[i], reject))
    {
        i++;
        counter++;
    }
    return (counter);

}
int main(int argc, char *argv[])
{
    printf("le moi ;%d", ft_strcspn(argv[1], argv[2]));
    printf("le moi ;%d", strcspn(argv[1], argv[2]));
    
}