 1 #include<stdio.h>
  2 #define SIZE 5
  3 int queue[SIZE];
  4 int front=-1,rear=-1;
  5 void enqueue (int value){
  6     if ((rear+1)%SIZE==front){
  7         printf("queue is full(overflow).\n");
  8         return;
  9     }
 10     if (front==-1)
 11         front=0;
 12     rear=(rear+1)%SIZE;
 13     queue[rear]=value;
 14     printf("%d inserted.\n",value);
 15 }
 16 void dequeue(){
 17     if(front==-1){
 18         printf("queue is empty(underflow)\n");
 19         return;
 20     }
 21         printf("%d deleted.\n",queue[front]);
 22         if(front==rear)
 23             front=rear=-1;
 24         else
 25             front=(front+1)%SIZE;
 26  }
 27  void display(){
 28
 29     if (front==-1){
 30          printf("queue is empty.\n");
 31          return;
 32     }
 33
 34     printf("queue:");
 35     int i=front;
 36     while(1){
 37         printf("%d",queue[i]);
 38         if(i==rear)
 39             break;
 40         i=(i+1)%SIZE;
 41     }
 42     printf("\n");
 43 }
 44 int main(){
 45     int choice,value;
 46     while(1){
 47         printf("\n--circulaar queue--\n");
 48         printf("1.insert\n2.delete\n3.display\n4.exit\n");
 49         printf("enter choice:");
 50         scanf("%d",&choice);
 51         switch(choice){
 52             case 1:
 53                 printf("enter value to insert:");
 54                 scanf("%d",&value);
 55                 enqueue(value);
 56                 break;
 57             case 2:
 58                 dequeue();
 59                 break;
 60             case 3:
 61                 display();
 62                 break;
 63             case 4:
 64                 return 0;
 65             default:
 66                 printf("invalid choice.\n");
 67         }
 68     }
 69 }
 