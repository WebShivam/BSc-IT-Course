#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
} 
*head = NULL;

// creating create function
void create()
{
    struct node *new, *temp;
    int n,x,i;
    printf("\n How many nodes you want to create?");
    scanf("%d,&n");
    i=0; 
    while(i<n){
        printf("\n Enter item %d in the list", i+1);
        scanf("%d", &x);
        new = (struct node *) malloc(sizeof(struct node));
        new->data =x;
        if (head ==NULL)
        {
            new->next=NULL;
            head=new;
        }
        else{
            temp=head;
            while(temp->next !=NULL)
                {
                    temp = temp->next;
                }
            temp->next = new;
            new->next = NULL;
            }
            i++;
    }
}
//inserting element at beginning
void ins_at_beg()
{
    int x;
    struct node *temp, *new;
    new= (struct node *) malloc(sizeof (struct node));
    printf("\n Enter the item to insert at beginning");
    scanf("%d",&x);
    new->data = x;
    if(head =NULL)
        new->next = NULL;
    else
        new->next = head;
    head = new;
}
// function to search items in list
void search()
{
    int key, pos =1;
    struct node *temp;
    if (head ==NULL)
        printf("\n the list is empty");
    else
    {
        printf("\nEnter the item to be search in the list");
        scanf("%d", &key);
        temp = head;
        while(temp!= NULL)
        {
            if(key==temp->data)
            {
                printf("\nItem found at position %d", pos);
                break;
            }
            temp = temp->next;
            pos++;
        }
    }
}
//function to display list
void display(){
    struct node *new_node;
    if(head==NULL)
        printf("\n No Item in the list to display\n");
    else
        {
            printf("\n The current Linked List : \n");
            new_node =head;
        
        while (new_node != NULL)
            {
                printf("%d-->", new_node->data);
                new_node= new_node-> next;
            }
            printf("NULL \n");
        }
}
//function to delete items from list
void delete_at_pos()
{
    struct node *temp, *hold;
    int pos, i=1, dd;
    printf("\n Enter position to delete");
    scanf("%d", &pos);
    if(pos == 1)
    {
        {
            if(head->next==NULL)
            {
                dd =head->data;
                head = NULL;
            }
            else{
                dd = head->data;
                head= head->next;
            }
            printf("\n deleted data is %d, dd");
        }
    }
    if(pos>1)
    {
        temp= head;
        for(i=1; i<pos-1;i++)
    temp=temp->next;
        dd= temp->next->data;
        temp->next = temp->next->next;
        free (temp->next);
        printf("\n deleted data is %d",dd);
    }
    //free (hold);
}
void insert_at_pos ()
{
    struct node *temp, *new;
    int pos, i, x;
    printf("\n Enter the position");
    scanf("%d", &pos);
    printf("\n Enter the data to insert");
    scanf("%d", &x);
    new = (struct node *) malloc (sizeof(struct node));
    new->data =x;
    if (pos == 1)
        {
            if (head == NULL)
                new->next =NULL;
            else
                new->next =head;
            head=new;
        }
    if (pos > 1)
    {
        temp = head;
        for (i=1; i<pos-1 && temp != NULL; i++)
        temp = temp->next;
        new->next = temp-> next;
        temp->next =new;
    }
}
//deleting item at end of node
void delete_at_end()
{
    struct node *temp;
    if (head== NULL)
        printf ("\n No item to delete in the list\n");
    else
    {
        temp = head;
        if(temp->next ==NULL)
        {
            head = NULL;
            printf ("\n Deleted data is  %d", temp->data);
            free(temp);
        }
        else
        {
            while (temp->next->next!=NULL)
             temp = temp->next;
            printf("\n Deleted data is = %d", temp->next->data);
            free (temp->next);
        }
    }
}
//writing the main function
main()
{
    int value, choice;
    system("clear");
    while(1)
    {
        printf("\n\n*****MENU*****\n");
        printf("1. Create \n2. Display \n3. Insert at End \n4. Search\n5.Delete at desired Position \n6. Insert at desired position \n7. Exit \n8. Delete at End");
        printf("\n Enter your Choice: ");
        scanf("%d, &choice");
        switch(choice)
        {
            case 1:
                create ();
                break;
            case 2: 
                display();
                break;
            case 3: 
                ins_at_beg();
                break;
            case 4:
                search ();
                break;
            case 5:
                delete_at_pos ();
                break;
            case 6:
                insert_at_pos ();
                break;
            case 7:
                exit (0);
            case 8:
                delete_at_pos ();
                break;
            default: 
                printf ("\n Wrong choice. Try Again !!\n");
        }
    }
}