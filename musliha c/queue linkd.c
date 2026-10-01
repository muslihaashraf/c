 1  #include<stdio.h>
  2 #include<stdlib.h>
  3 struct node{
  4     int data;
  5     struct node *next;
  6 };
  7 int main(){
  8     struct node *front=NULL;
  9     struct node *rear=NULL;
 10     struct node *newNode, *temp;
 11     int choice,value;
 12     while(1){
 13         printf("\n---queue using linked list--\n");
 14         printf("1.enqueue\n2.dequeue\n3.display\n4.exit\n");
 15         printf("enter your choice:");
 16         scanf("%d",&choice);
 17         switch(choice){
 18             case 1:
 19                 printf("enter value to enqueue:");
 20                 scanf("%d",&value);
 21
 22                  newNode=(struct node*)malloc(sizeof(struct node));
 23                  if (newNode==NULL){
 24                      printf("queue overflow\n");
 25                      break;
 26                  }
 27                   newNode->data=value;
 28                   newNode->next=NULL;
 29                   if(rear==NULL){
 30                      front=rear=newNode;
 31                   }else{
 32                      rear->next=newNode;
 33                      rear=newNode;
 34                   }
 35
 36                  printf("%d enqueued to queue\n",value);
 37                  break;
 38             case 2:
 39                  if(front==NULL){
 40                      printf("queue underflow\n");
 41                      break;
 42                  }
 43                  temp=front;
 44                  printf("%d dequeued from quueue\n",front->data);
 45                  front=front->next;
 46                  if(front==NULL)
 47                      rear=NULL;
 48                  free (temp);
 49                  break;
 50             case 3:
 51                  if (front==NULL){
 52                      printf("queue is empty\n");
 53                      break;
 54                  }
 55                  temp=front;
 56                  printf("queue elements:");
 57                  while(temp!=NULL){
 58                      printf("%d->",temp->data);
 59                          temp=temp->next;
 60                  }
 61                  printf("NULL\n");
 62                  break;
 63             case 4:
 64                  exit(0);
 65             default:
 66                  printf("invalid choice!\n");
 67         }
 68     }
 69     return 0;
 70 }
 