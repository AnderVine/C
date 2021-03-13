#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define N 300
#define M 300


int main(int argc, char* argv[])
{

    

    int perenos = 0;
    
    typedef struct list * init(int a)
    {
    struct list *lst;
    lst = (struct list*)malloc(sizeof(struct list));
    lst->field = a;
    lst->ptr = NULL;
    return(lst);
    }


    for(int i=1; i<N;i++)
    {
        int number=rand()%9;
        struct list * addelem(list *lst, int number)
        {
        struct list *temp, *p;
        temp = (struct list*)malloc(sizeof(list));
        p = lst->ptr; 
        lst->ptr = temp; 
        temp->field = number; 
        temp->ptr = p; 
        return(temp);
        }
    }

    void listprint(list *lst)
    {
    struct list *p;
    p = lst;
    do {
        printf("%d ", p->field); 
        p = p->ptr; 
    } while (p != NULL);
    }


}