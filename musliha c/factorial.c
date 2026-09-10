#include<stdio.h>
 int factorial(int n){
      int result=1;
      for(int i=1;i<=n;i++){
          result*=i;
      }
      return result;
  }
  int main(){
      int n;
      printf("enter a number:");
      scanf("%d",&n);
      printf("factorail=%d\n",factorial(n));
      return 0;
  }

output:-
enter a number:5
factorail=120
