#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int arr[],int low,int high)
{
    int pivot=0,i=0,j=0;
    pivot=arr[high];
    i=low-1;
    for(j=low;j<high;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[i+1],&arr[high]);
    return (i+1);
}
void quicksort(int arr[],int low,int high)
{
    if(low<high)
    {
        int q=partition(arr,low,high);
        quicksort(arr,low,q-1);
        quicksort(arr,q+1,high);
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[]={10,7,8,9,1,5};
    int n=6;//size of array
    printf("unsorted array : ");
    display(arr,n);
    quicksort(arr,0,n-1);
    printf("sorted array : ");
    display(arr,n);
    return 0;
}