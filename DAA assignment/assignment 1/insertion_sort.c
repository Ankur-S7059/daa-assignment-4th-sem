#include<stdio.h>
void insertionSort(int a[],int n)
{
    int i=0,j=0,key=0;
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0&&a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
        }
        a[i+1]=key;
    }
}
void printarray(int a[],int n)
{
	int i=0;
    for( i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int size=0,i=0;
    printf("Enter size of array : ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("Enter element %d : \n",i);
        scanf("%d",&arr[i]);
    }
    printf("\nThe original array : \n");
    printarray(arr,size);
    insertionSort(arr,size);
    printf("\nThe sorted array : \n");
    printarray(arr,size);
}
