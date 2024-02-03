#include<stdio.h>
int findbitonic(int arr[],int n)
{
    int left=0,right=n-1;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        return mid;
        else if(arr[mid]>arr[mid-1])
        left=mid+1;
        else
        right=mid-1;
    }
    return -1;
}
int main()
{
    int arr[]={1,3,5,7,10,8,6,4,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int btpt=findbitonic(arr,n);
    if(btpt!=-1)
    printf("the bitonic point is : %d",arr[btpt]);
    else
    printf("no bitonic point present");
}