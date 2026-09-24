 1 #include<stdio.h>
  2 int main()
  3 {
  4     int i,n,ch,v;
  5     printf("enter size of queue:");
  6     scanf("%d",&n);
  7     if(n<=0)
  8     {
  9         printf("invalid size\n");
 10         return 1;
 11     }
 12     int queue[n];
 13     int f=-1,r=-1;
 14     while(1){
 15         printf("\nmenu\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
 16         printf("enter your choice:");
 17         scanf("%d",&ch);
 18         if(ch==1)
 19         {
 20             if(r==n-1)
 21             {
 22                 printf("queue is full\n");
 23             }
 24             else
 25             {
 26                 printf("enter the element:");
 27                 scanf("%d",&v);
 28                 r=r+1;
 29                 queue[r]=v;
 30                 if(f==-1)
 31                 {
 32                     f=0;
 33                 }
 34             }
 35         }
 36         else if(ch==2)
 37         {
 38             if(f==-1||f>r)
 39             {
 40                 printf("queue is empty\n");
 41             }
 42             else
 43             {
 44                 printf("deleted %d\n",queue[f]);
 45                 f=f+1;
 46             }
 47         }
 48         else if(ch==3)
 49         {
 50             if(f==-1||f>r)
 51             {
 52                 printf("queue is empty\n");
 53             }
 54             else
 55             {
 56                 printf("queue is:");
 57                 for(i=f;i<=r;i++)
 58                 {
 59                     printf("%d",queue[i]);
 60                 }
 61                 printf("\n");
 62             }
 63             }
 64             else if(ch==4)
 65             {
 66                 break;
 67             }
 68             else
 69             {
 70                 printf("invalid choice\n");
 71             }
 72         }
 73         return 0;
 74  }
