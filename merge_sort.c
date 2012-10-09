/*Program to implement merge sort*/
#include<stdio.h>
void mergeSort(int arr[],int low,int mid,int high);//function for merging
void partition(int arr[],int low,int high);//function for partition
void main()
{

    int merge[50],i,n;
    printf("Enter the total number of elements: ");
    scanf("%d",&n);//read no of elements
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
        scanf("%d",&merge[i]);//read the elements
    partition(merge,0,n-1);//call  partition function
    printf("Elements after sorting are: ");
    for(i=0;i<n;i++)
        printf("%d ",merge[i]);//print sorted list
    printf("\n");
}

void partition(int arr[],int low,int high)//defining function
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;//finding mid value
        partition(arr,low,mid);//call partition function for first half
        partition(arr,mid+1,high);//call partition function for second half
        mergeSort(arr,low,mid,high);//calling merge function
    }
}

void mergeSort(int arr[],int low,int mid,int high)//defining merge function
{
    int i,m,k,l,temp[50];
    l=low;
    i=low;
    m=mid+1;
    while((l<=mid)&&(m<=high))
    {
        if(arr[l]<=arr[m])//cheking if lower value is less than middle+1
        {
            temp[i]=arr[l];//place it in temparay array
            l++;
        }
        else
        {
            temp[i]=arr[m];//place it in temparay array
            m++;
        }
        i++;
    }

    if(l>mid)
    {
        for(k=m;k<=high;k++)
        {
            temp[i]=arr[k];
            i++;
        }
    }
    else
    {
        for(k=l;k<=mid;k++)
        {
            temp[i]=arr[k];
            i++;
        }
    }

    for(k=low;k<=high;k++)// move sorted list to original array from temp
        arr[k]=temp[k];
}
