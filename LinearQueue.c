#include <stdio.h>
#include<stdlib.h>
#define QSIZE 5

void insert_rear(int q[],int item,int *r)
{
    if (*r==QSIZE-1)
    printf("QUEUE OVERFLOW\n");
    else
    {
        (*r)++;
        q[*r]=item;
    }
}

int delete_front(int q[],int *f,int *r)
{
    if (*f>*r)
    printf("\nQUEUE UNDERFLOW\n");
    else
    {
        return q[(*f)++];
    }
}

int display(int q[],int *f,int *r)
{
    int i;
    if (*f>*r)
    printf("\nQUEUE IS EMPTY\n");
    else
    {
        for(i=*f;i<=*r;i++)
        printf("%d",q[i]);
    }
}

void main()
{

    int q[QSIZE],item,r=-1,f=0,val_del,choice;
    while(1)
    {

        printf("\n1. Insert \n");
        printf("2. Delete \n");
        printf("3. Display \n");
        printf("4. Exit \n");
        printf("Enter your choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1: printf("enter the value to be inserted");
                scanf("%d",&item);
                insert_rear(q,item,&r);
                break;
            case 2: val_del=delete_front(q,&f,&r);
                printf("deleted item is %d",val_del);
                break;
            case 3:
                display(q,&f,&r);
                break;
            case 4:
                exit(0);
                break;
                default:
                printf("Invalid choice \n");

        }
    }
}
