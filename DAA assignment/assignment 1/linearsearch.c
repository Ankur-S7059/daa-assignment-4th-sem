#include<stdio.h>
int main()
{
    int size=0,i=0,key=0,res=-1;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int arr[size];
    for(i=0;i<size;i++)
    {
        printf("enter element %d : ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter a key : ");
    scanf("%d",&key);
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            res=i;
            break;
        }
    }
    if(res!=-1)
    printf("%d found at %d",key,res);
    else
    printf("%d not found",key);
}