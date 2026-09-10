#include<stdio.h>
 int SumOfArray(int arr[],int n )
   {
     int sum=0;
     for(int i=0;i<n;i++)
     {
         sum+=arr[i];
     }
     return sum;
   }
 int main()
  {
     int n;
     printf("enter number of array elements:");
     scanf("%d",&n);
     int arr[n];
     printf("enter %d  elements:\n",n);
     for(int i=0;i<n;i++){
      scanf("%d",&arr[i]);
      }
     int result=SumOfArray(arr,n);
     printf("sum = %d\n",result);
     }
   

output:-
enter number of array elements:4
enter 4  elements:
5
6
3
2
sum = 16

