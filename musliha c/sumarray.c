#include<stdio.h>
  2 int SumOfArray(int arr[],int n )
  3   {
  4     int sum=0;
  5     for(int i=0;i<n;i++)
  6     {
  7
  8         sum+=arr[i];
  9     }
 10     return sum;
 11  }
 12 int main()
 13 {
 14     int n;
 15     printf("enter number of array elements:");
 16     scanf("%d",&n);
 17     int arr[n];
 18     printf("enter %d  elements:\n",n);
 19     for(int i=0;i<n;i++){
 20     scanf("%d",&arr[i]);
 21     }
 22     int result=SumOfArray(arr,n);
 23     printf("sum = %d\n",result);
     }
   

output:-
enter number of array elements:4
enter 4  elements:
5
6
3
2
sum = 16

