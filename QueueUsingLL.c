#include<conio.h>
#include<stdlib.h>
struct node
{
	int value;
	struct node *next;
};

typedef struct node *NODE;

NODE getnode()
{
	NODE temp;
	temp=(NODE)malloc(sizeof(struct node));
	if (temp==NULL)
	{
		printf("Memory not allocated\n");
		return NULL;
	}
	
	return temp;
}

NODE insert_beg(int item,NODE first)
{
	NODE new;
	new=getnode();
	new->value=item;
	new->next=NULL;
	if(first==NULL)
	{
		return new;
	}
	else
	{
		new->next=first;
		first=new;
		return first;
	}
}

NODE delete_end(NODE first)
{
    NODE prev,curr;
    if(first==NULL)
     {
        printf("Delete not possible\n");
        return NULL;
    }
    prev=NULL;
    curr=first;
    while(curr->next!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=NULL;
    printf("Item deleted is %d",curr->value);
    return first;
}

void display(NODE first)
{
	NODE temp;
	temp=first;
	while(temp!=NULL)
	{
		printf("Value stored in node IS %d\n",temp->value);
		temp=temp->next;
	}
}

void main()
{
	NODE first=NULL;
	int choice,pos,item;
	while(1)
	{
        printf("\n1.INSERT \n2.DELETE \n3.DISPLAY\n");
		printf("\n ENTER YOUR CHOICE\n");
		scanf("%d",&choice);
		switch(choice)
        {
            case 1:printf("\nEnter the value to be inserted\n");
			       scanf("%d",&item);
			       first=insert_beg(item,first);
                   break;

            case 2:first=delete_end(first);
                   break;
            
            case 3:display(first);
			       break;

            default:exit(0);
			        
		}
		
	}
}
