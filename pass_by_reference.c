#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 10
void push(int st[],int *top,int item)
 {
  if (*top==STACK_SIZE-1)
  printf("stack overflow\n");
  else
  {
   (*top)++;
   st[*top]=item;
  }
}



int pop(int st[],int *top)
{
 int del_item;
 if(*top==-1)
 printf("stack underflow\n");
 else
 {
  del_item = st[*top];
  (*top)--;
  return del_item;
 }
}

void display(int st[],int *top)
{
 int i;
 if(top==-1)
 printf("stack is empty,nothing to display\n");
 for(i=0;i<=*top;i++)
 printf("%d\t",st[i]);
}


void main()
{
 int top=-1,item,ch,val_del,st[STACK_SIZE];
 while(1)
 {
  printf("\n 1.PUSH 2.POP 3.DISPLAY \n");
  printf("enter your choice\n");
  scanf("%d",&ch);
  switch(ch)
  {
   case 1:printf("enter the value to be inserted\n");
          scanf("%d",&item);
          push(st,&top,item);
          break;
   
   case 2:val_del=pop(st,&top);
          printf("\nthe deleted item is %d",val_del);
          break;
   
   case 3:display(st,&top);
          break;
   
   default:exit(0);
           
  }
 }
}
