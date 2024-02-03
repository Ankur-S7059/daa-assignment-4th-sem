#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define m 3//no. of rows
#define n 4//no. of columns
bool binaryserach1d(int arr[],int k)
{
    int low=0,high=0,mid=0;;
    high=n-1;
    while (low<=high)
    {
        mid=low+(high-low)/2;
        if(arr[mid]==k)
        return true;
        else if(arr[mid]<k)
        low=mid+1;
        else
        high=mid-1;
    }
    return false;
}
bool searchmatrix(int arr[m][n],int k)
{
    int low=0,high=0,mid=0;;
    high=m-1;
    while (low<=high)
    {
        mid=low+(high-low)/2;
        if(k>=arr[mid][0]&&k<=arr[mid][n-1])//row major arrangement
        return binaryserach1d(arr[mid],k);
        else if(k<arr[mid][0])
        high=mid-1;
        else
        low=mid+1;
    }
    return false;
}
int main()
{
    int arr[m][n]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int k=10;//element to be searched
    if(searchmatrix(arr,k))
    printf("is found");
    else
    printf("not found");
}