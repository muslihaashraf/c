 #include<stdio.h>
  2 int main()
  3 {
  4     int a[5],b[5],c[10];
  5     int i,j,k,temp;
  6     printf("enter 5 elements of first array:\n");
  7     for(i=0;i<5;i++){
  8         scanf("%d",&a[i]);
  9     }
 10     printf("enter 5 elememts of second array");
 11     for(i=0;i<5;i++){
 12         scanf("%d",&b[i]);
 13     }
 14     for(i=0;i<5;i++)
 15     {
 16         for(j=i;j<5;j++)
 17         {
 18      if(a[i]>a[j])
 19      {
 20   temp=a[i];
 21   a[i]=a[j];
 22   a[j]=temp;
 23      }
  24         }
 25     }
 26   for(i=0;i<5;i++)
 27   {
 28     for(j=i+1;j<5;j++)
 29     {
 30         if(b[i]>b[j])
 31         {
 32           temp=b[i];
 33           b[i]=b[j];
 34           b[j]=temp;
 35         }
 36     }
 37   }
 38   i=0;
 39   j=0;
 40   k=0;
 41
 42   while(i<5 && j<5){
 43       if(a[i]<=b[j]){
 44             c[k]=a[i];
 45             i++;
 46         }
 47         else
 48         {                    
 49             c[k]=b[j];
 50             j++;
 51
 52         }
 53         k++;
 54     }
 55         while(i<5)
 56         {
 57             c[k]=a[i];
 58             i++;
 59             k++;
 60         }
 61         while(j<5)
 62         {
 63             c[k]=b[j];
 64             j++;
 65             k++;
 66         }
 67
 68         printf("mergeed sorted array:\n");
 69         for(i=0;i<10;i++)
 70         {
 71             printf("%d ",c[i]);
 72         }
 73         return 0;
 74     }
