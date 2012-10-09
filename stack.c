/*Program to implement stack*/
#include<stdio.h>
void main()
{
    int choice,num,i,stkptr=-1,stk[50]; 
    char opt ;
    while(1)
    {
        puts("Enter your choice\n*****************");
        puts("1.PUSH\n2.POP\n3.VIEW");//read choice from user
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: //push operation
                puts("Enter the new element: ");
                scanf(" %d",&num);
                stkptr++;
                stk[stkptr]=num;//add at stack pointer points
                break;
            case 2://pop operation
                if(stkptr < 0)
                    puts("Empty Stack");
                else
                {
                    printf("The element deleted is : %d",stk[stkptr]);
                    stkptr--;
                }
                break;
            case 3://display stack
                if(stkptr < 0)
                    puts("Empty Stack");
                else
                {
                    printf("\nThe elements in the array are :");
                    for(i=0;i<=stkptr;i++)
                        printf("%d ",stk[i]);
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
