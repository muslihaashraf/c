 #include<stdio.h>
  2 int largest(int arr[],int n){
  3     int max=arr[0];
  4     for(int i=0;i<n;i++){
  5         if(arr[i]>max){
  6             max=arr[i];
  7         }
  8     }
  9 return max;
 10 }
 11 int main(){
 12     int arr[100],n;
 13     printf("enter number of elements:");
 14     scanf("%d",&n);
 15     printf("enter %d elements:\n",n);
 16     for(int i=0;i<n;i++){
 17     scanf("%d",&arr[i]);
 18     }
 19     printf("largest=%d\n",largest(arr,n));
 20
 21 return 0;
 22 }


output:-
enter number of elements:4
enter 4 elements:
56
32
51
18
largest=56