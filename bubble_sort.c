// Program to sort using Bubble sorting
#include<stdio.h>
void main()
{
	int a[50],i,n,temp,j;
	puts("Enter how many elements to sort?:");
	scanf("%d",&n);
	puts("Enter the elements to sort:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);//reading elements
	for(i=0;i<n;i++)//sorting loop
		for(j=(i+1);j<n;j++)
			if(a[i]>=a[j])
			{
				temp=a[i];//swap with next if number is small
				a[i]=a[j];
				a[j]=temp;
			}
	
	printf("\nArray after sorting: ");
	for(i=0;i<n;i++)
		printf("%d ",a[i]);//printing ascending order
	printf("\n");
}
	
	
			
	
