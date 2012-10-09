/*Program to implement insertion sort*/
#include<stdio.h>
void main()
{
    int i,j,s,temp,a[50];
    printf("Enter total elements: ");
    scanf("%d",&s);//read no of elements
    printf("Enter %d elements: ",s);
    for(i=0;i<s;i++)
        scanf("%d",&a[i]);//read elements from user
    for(i=1;i<s;i++)
    {
        temp=a[i];
        j=i-1;
        while((temp<a[j])&&(j>0))//checking 
        {
            a[j+1]=a[j];//shifting
            j=j-1;
        }
        a[j+1]=temp;
    }
    printf("After sorting: ");
    for(i=0;i<s;i++)
        printf(" %d",a[i]);//printing sorted list
}
