 #include<stdio.h>
  int main()
  {
      int a[5],b[5],c[10];
      int i,j,k,temp;
      printf("enter 5 elements of first array:\n");
      for(i=0;i<5;i++){
          scanf("%d",&a[i]);
      }
      printf("enter 5 elememts of second array");
      for(i=0;i<5;i++){
          scanf("%d",&b[i]);
      }
      for(i=0;i<5;i++)
      {
          for(j=i;j<5;j++)
          {
       if(a[i]>a[j])
       {
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
       }
          }
      }
    for(i=0;i<5;i++)
    {
      for(j=i+1;j<5;j++)
      {
          if(b[i]>b[j])
          {
            temp=b[i];
            b[i]=b[j];
            b[j]=temp;
          }
      }
    }
    i=0;
    j=0;
    k=0;
 
    while(i<5 && j<5){
       if(a[i]<=b[j]){
              c[k]=a[i];
              i++;
          }
          else
          {                    
              c[k]=b[j];
              j++;
 
          }
          k++;
      }
          while(i<5)
          {
              c[k]=a[i];
              i++;
              k++;
          }
          while(j<5)
          {
              c[k]=b[j];
              j++;
              k++;
          }
 
          printf("mergeed sorted array:\n");
          for(i=0;i<10;i++)
          {
              printf("%d ",c[i]);
          }
          return 0;
      }
