 1 #include<stdio.h>
  2 #define SIZE 9
  3 typedef struct {unsigned char x:1;}bit;
  4 const int uset [SIZE]={1,2,3,4,5,6,7,8,9};
  5 void readset (bit a[],int n);
  6 void printset (const bit a[]);
  7 void unionset(const bit a[],const bit b[],bit c[]);
  8 void intersect (const bit a[],const bit b[],bit c[]);
  9 void difference (const bit a[],const bit b[],bit c[]);
 10 int main(void)
 11 {
 12     bit a[SIZE]={{0}},b[SIZE]={{0}},c[SIZE]={{0}};
 13     int n;
 14     printf("universal set :{1,2,3,4,5,6,7,8,9}\n\n");
 15     printf("number of elements in set A:");
 16     if(scanf("%d",&n)!=1)return 1;
 17     readset(a,n);
 18     printf("No.of elements in set B:");
 19     if (scanf("%d",&n)!=1)return 1;
 20     readset(b,n);
 21     printf("\nset A:");
 22     printset(a);
 23     printf("set B:");
 24     printset(b);
 25     unionset(a,b,c);
 26     printf("\n\tA U B =");
 27     printset(c);
 28     intersect(a,b,c);
 29     printf("\n\tA intersect B =");
 30     printset(c);
 31     difference(a,b,c);
 32     printf("\n\tA-B=");
 33     printset(c);
 34     return 0;
 35 }
 36 void readset(bit a[],int n)
 37 {
 38     int i,k,x;
 39     if(n<0||n>SIZE){
 40         printf("invalid size;must be between o and %d.\n",SIZE);
 41         return;
 42 }
 43 printf("enter %d elemnets :",n);
 44 for(i=0;i<n;i++){
 45     if(scanf("%d",&x)!=1)return;
 46     for(k=0;k<SIZE;k++){
 47         if(uset[k]==x){a[k].x=1;break;}
 48     }
 49     if(k==SIZE)
 50         printf("%d is not in the universal set,ignored\n",x);
 51 }
 52 }
 53 void printset(const bit a[])
 54 {
 55     int k,first=1;
 56     printf("{");
 57     for (k=0;k<SIZE;k++){
 58         if(a[k].x){
 59             printf(first ? "%d" : ",%d",uset[k]);
 60             first=0;
 61         }
 62     }
 63     printf("}\n");
 64 }
 65 void unionset( const bit a[],const bit b[],bit c[])
 66 {
 67     for(int k=0;k<SIZE;k++)
 68         c[k].x=a[k].x | b[k].x;
 69 }
 70 void intersect(const bit a[],const bit b[],bit c[])
 71 {
 72     for (int k=0;k<SIZE;k++)
 73         c[k].x=a[k].x & b[k].x;
 74 }
 75 void difference(const bit a[],const bit b[],bit c[])
 76 {
 77     for (int k=0;k<SIZE;k++)
 78         c[k].x=a[k].x && !b[k].x;
 79 }
 