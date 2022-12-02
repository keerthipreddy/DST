#include <stdio.h>
#include<stdlib.h>
#define QSIZE 5
int count=0;

void insert(int q[],int item,int *r)
{
    if (count==QSIZE)
    printf("QUEUE OVERFLOW\n");
    else
    {
        ((*r)++)%QSIZE;
        q[*r]=item;
        count++;
    }
}

int delete(int q[],int *f,int *r)
{
    int del_item;
    if (count==0)
    printf("\nQUEUE UNDERFLOW\n");
    else
    {
        del_item =q[*f];
        *f=(((*f)++)%QSIZE);
        count--;
        return del_item;
    }
}

int display(int q[],int *f)
{
    int temp,i;
    temp=*f;
    for(i=0;i<count;i++)
    {
        printf("%d\n",q[i]);
        temp=(temp+1)%QSIZE;
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
                insert(q,item,&r);
                break;
            case 2: val_del=delete(q,&f,&r);
                printf("deleted item is %d",val_del);
                break;
            case 3:
                display(q,&f);
                break;
            case 4:
                exit(0);
                break;
                default:
                printf("Invalid choice \n");

        }
    }
}
