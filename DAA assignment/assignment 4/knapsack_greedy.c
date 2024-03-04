#include<stdio.h>
void knapsack(int n,float weight[],float profit[], float capacity){
    float x[n],totalProfit=0;
    int i=0,j=0,u=0;
    u=capacity;
    for(i=0;i<n;i++)
    x[i]=0.0;
    for(i=0;i<n;i++){
        if(weight[i]>u)
        break;
        else{
            x[i]=1.0;
            totalProfit+=profit[i];
            u=u-weight[i];
        }
    }
    if(i<n)
    x[i]=u/weight[i];
    
    totalProfit+=(x[i]*profit[i]);
    printf("\nMaximum profit : %0.2f",totalProfit);
}
int main()
{
    int num=0,i=0,j=0;
    printf("Enter the number of object : ");
    scanf("%d",&num);
    float weight[num],profit[num],capacity=0.0,ratio[num],temp=0.0;
    printf("Enter details for the following objects : ");
    for(i=0;i<num;i++)
    {
        printf("\nEnter weight of object %d : ",(i+1));
        scanf("%f",&weight[i]);
        printf("\nEnter profit of object %d : ",(i+1));
        scanf("%f",&profit[i]);
    }
    printf("\nEnter the capacity of knapsack : ");
    scanf("%f",&capacity);
    for(i=0;i<num;i++)
    ratio[i]=profit[i]/weight[i];
    for (i = 0; i < num; i++) {
      for (j = i + 1; j < num; j++) {
         if (ratio[i] < ratio[j]) {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;

            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;

            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
      }
    }
    knapsack(num,weight,profit,capacity);
}