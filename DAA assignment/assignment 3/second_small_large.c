#include<stdio.h>
int secondlargest(int arr[],int n)
{
    int big=0,big2=-1,i=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[big])
        big=i;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[big])
        {
            if(big2==-1)
            big2=i;
            else if(arr[i]>arr[big2])
            big2=i;
        }
    }
    return big2;
}
int secondsmallest(int arr[],int n)
{
    int small=0,small2=-1,i=0;
    for(i=1;i<n;i++)
    {
        if(arr[i]<arr[small])
        small=i;
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[small])
        {
            if(small2==-1)
            small2=i;
            else if(arr[i]<arr[small2])
            small2=i;
        }
    }
    return small2;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    int second_smallest=secondsmallest(arr,8);
    int second_largest=secondlargest(arr,8);
    printf("the 2nd smallest element : %d\n",arr[second_smallest]);
    printf("the 2nd largest element : %d",arr[second_largest]);
}