#include<stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void heapify(int arr[],int n,int i)
{
    int largest=i;//initial value of i is 0
    int left=0,right=0;
    left=(2*i)+1;
    right=(2*i)+2;
    if(left < n && arr[left] > arr[largest])
        largest = left;
    if(right < n && arr[right] > arr[largest])
        largest=right;
    if (largest != i)
    {
        swap(&arr[i],&arr[largest]);
        heapify(arr,n,largest);
    }
}
void heapSort(int arr[], int n)
{
    // Build max heap
    for (int i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    // Heap sort
    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);//heapifying root element
    }
}
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7};
    int N = sizeof(arr) / sizeof(arr[0]);
    printf("Unsorted array is\n");
    printArray(arr, N);
    heapSort(arr, N);
    printf("Sorted array is\n");
    printArray(arr, N);
}