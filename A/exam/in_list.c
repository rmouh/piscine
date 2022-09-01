#include <unistd.h>
#include <stdio.h>
typedef struct t_list
{
    struct s_list *next;
    void *data

}t_list;
int nbr_list(t_list *begin)
{
    t_list t;

    t = begin;
    while (t != NULL)
    {
        counter++;
        l = begin->next;
    }
    return (counter);


}
