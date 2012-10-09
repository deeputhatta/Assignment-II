/* program to implement Queue*/
#include<stdio.h>
void main()
{
    int choice,num,i,frnt=0,rer=0,que[50]; 
    char opt ;
    while(1)
    {
        puts("Enter your choice\n*****************");
        puts("1.INSERT\n2.DELETE\n3.VIEW");
        scanf("%d",&choice);//read choice from user
        switch(choice)
        {
            case 1: //Insertion operation
                puts("Enter the new element: ");
                scanf("%d",&num);
                que[rer]=num;//add elements at rear
                rer+=1;
                break;
            case 2:
                if(rer == frnt)// Deletion operation
                    puts("Empty Queue");
                else
                {
                    printf("The element deleted is : %d",que[frnt]);
                    frnt=frnt+1;//delete from front
                }
                break;
            case 3:

                if(rer == frnt)
                    puts("Empty Queue");
                else
                {
                    printf("\nThe elements in the Queue are :");
                    for(i=frnt;i<rer;i++)
                        printf("%d ",que[i]);//printitng each element
                }
                break;
            default :
                puts("Invalid choice");
                break;
        }
        printf("\nDo you want to continue ? Y/N :");// request for continuation
        scanf(" %c",&opt);
        if(opt == 'y'|| opt == 'Y')
            continue;
        else
        {
            puts("Thank You");
            break;
        }
    }
}
