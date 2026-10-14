 1 #include<stdio.h>
  2 #include<stdlib.h>
  3 struct node{
  4     int data;
  5     struct node *prev;
  6     struct node *next;
  7 };
  8 struct node *head=NULL;
  9 void insert()
 10 {
 11     struct node *newnode, *temp;
 12     int value;
 13     newnode=(struct node*)malloc (sizeof(struct node));
 14             printf("enter data:");
 15             scanf("%d",&value);
 16             newnode->data=value;
 17             newnode->prev=NULL;
 18             newnode->next=NULL;
 19             if(head==NULL)
 20             {
 21             head=newnode;
 22             }
 23             else
 24             {
 25             temp=head;
 26             while(temp->next!=NULL)
 27             {
 28                 temp=temp->next;
 29             }
 30             temp->next=newnode;
 31             newnode->prev=temp;
 32             }
 33             printf("node inserted successfully.\n");
 34 }
 35 void deletenode()
 36 {
 37     struct node *temp;
 38     if(head==NULL)
 39     {
 40         printf("list is empty.\n");
 41         return;
 42     }
 43     temp=head;
 44     head=head->next;
 45     if(head!=NULL)
 46     {
 47         head->prev=NULL;
 48     }
 49     printf("deleted element:%d\n",temp->data);
 50     free(temp);
 51 }
 52 void display()
 53 {
 54     struct node *temp;
 55     if(head==NULL)
 56     {
 57         printf("list is empty,\n");
 58     }
 59     temp=head;
 60     printf("doubly linked list:");
 61     while(temp!=NULL)
 62     {
 63         printf("%d<->",temp->data);
 64         temp=temp->next;
 65     }
 66     printf("NULL\n");
 67 }
 68 int main()
 69 {
 70     int choice;
 71     while(1)
 72     {
 73         printf("\n---doubly linked list---\n");
 74         printf("1.insert\n2.delete\n3.display\n4.exit\n");
 75         printf("enter your choice: ");
 76         scanf("%d",&choice);
 77         switch(choice)
 78         {
 79             case 1:
 80                 insert();
 81                 break;
 82             case 2:
 83                 deletenode();
 84                 break;
 85             case 3:
 86                 display();
 87                 break;
 88             case 4:
 89                 exit(0);
 90             default:
 91                 printf("invalid choice.\n");
 92         }
 93     }
 94     return 0;
 95 }

     