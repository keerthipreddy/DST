struct node
{
    int value;
    struct node *next;
    struct node *prev;

};
typedef struct *NODE;

NODE getnode()
{
    NODE temp;
    temp=(NODE) malloc(sizeof(struct node));
    if(temp==NULL)
    printf("memory not allocated");
    return temp;
}

NODE insert_left(NODE first,int key,int item)
{
    NODE new,temp;
    new=getnode();
    new->value=item;
    new->prev=NULL;
    new->next=NULL;
    if(first==NULL)
    retuen NULL;
    if(first->next==NULL && first->value!=key)
    {
        printf("Key not found....can't insert!!!");
        return new;

    }
        if(first->next==NULL && first->value==key)
    {
        new->next=first;
        first->prev=new;
        return new;

    }
    temp=first;
    while(temp->value!=key && temp->next!=NULL)
    {
        temp=temp->next;
    }
    if(temp->value==key)
    {
        new->next=temp;
        new->prev=temp->prev;
        (temp->prev)->next=new;
        temp->prev=new;
        return first;
    }

}
