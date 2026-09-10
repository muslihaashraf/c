 #include<stdio.h>
 int largest(int arr[],int n){
      int max=arr[0];
      for(int i=0;i<n;i++){
           if(arr[i]>max){
               max=arr[i];
           }
       }
  return max;
 }
 int main(){
     int arr[100],n;
     printf("enter number of elements:");
     scanf("%d",&n);
     printf("enter %d elements:\n",n);
     for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
     }
     printf("largest=%d\n",largest(arr,n));
  return 0;
 }


output:-
enter number of elements:4
enter 4 elements:
56
32
51
18
largest=56
