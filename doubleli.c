/*Program to implement Doubly linked list*/
#include<stdio.h>
#include<stdlib.h>
struct list//defining a node
{
    int num;
    struct list *next,*prev;
}*head,*l,*x,*k;
void main()
{
    int ch,cnt=0,po,i=2,no,n=1;
    head=0;
    while(n!=4)
    {
        puts("\nDoubly linked list\n******************");
        puts("1.Insert\n2.Delete\n3.View\n4.exit");
        printf("Enter your choice:");
        scanf("%d",&ch);//read choice from user
        switch(ch)
        {
            case 1:
                if(head == NULL)//check for empty node
                {
                    puts("Insert first element");
                    scanf("%d",&no);//read  first element
                    x=((struct list *)malloc(sizeof(struct list)));//allocate memory for node
                    x->num=no;
                    x->next=NULL;
                    x->prev=NULL;
                    head=x;
                    cnt++;
                }
                else
                {
                    puts("Enter the position to insert:");
                    scanf(" %d",&po);
                    if(po>(cnt+1))//check for invalid position
                    {
                        puts("Invalid position");
                        break;
                    }
                    else
                    {
                        if(po==1)//insertion at first position
                        {
                            puts("Enter the element:");
                            scanf("%d",&no);
                            x=((struct list *)malloc(sizeof(struct list)));
                            x->num=no;
                            x->next=head;
                            head->prev=x;
                            x->prev=NULL;
                            head=x;
                            cnt++;
                            break;
                        }
                        else
                        {// insertion at another positions
                            puts("Enter the element:");
                            scanf("%d",&no);
                            cnt++;
                            l=head;
                            i=1;
                            while(l->next!=NULL)
                            {
                                i++;
                                if(po==i)//finding position
                                {
                                    x=((struct list *)malloc(sizeof(struct list)));//allocating new memory
                                    x->num=no;
                                    x->next=l->next;
                                    x->prev=l;
                                    l->next=x;
                                    k=l->next;
                                    k->prev=x;
                                    break;
                                }
                                l=l->next;
                            }
                        }
                    }

                }
                break;
            case 2://delete operation
                if(head==NULL)//check for empty list
                    puts("Empty list");
                else
                {
                    puts("Enter the position to delete");
                    scanf("%d",&po);
                    if(po>cnt)//position is greater than existing list
                        puts("No such postion exists");
                    else
                    {
                        if(po==1)//delete from first
                        {

                            printf("The item Removed is %d",head->num);
                            head=head->next;
                            head->prev=NULL;
                            break;
                        }
                        else
                        { //delete from other positions
                            l=head;
                            i=1;
                            while(l->next!=NULL)
                            {
                                i++;
                                if(po==(i-1))//finding position to delete
                                {
                                    x=l->next;
                                    printf("The item Removed is %d",x->num);
                                    l->next=x->next;
                                    k=x->next;
                                    k->prev=l;
                                    break;
                                }
                                l=l->next;

                            }    
                        }
                    }
                }
                break;

            case 3://display  list
                l=head;
                if (head==NULL)//check for empty list
                    puts("Empty list");
                else
                {
                    printf("The elements in the list are: ");
                    while(l->next!=NULL)
                    {
                        printf("%d ",l->num);//printing each one
                        l=l->next;                            
                    } 
                }
                break;
            case 4: 
                printf("Thank you\n");
                n=4;
                break;
            default:
                puts("Invalid input\n");
                break;
        }
    }

}


