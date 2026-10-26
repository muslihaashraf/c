 1 #include<stdio.h>
  2 #include<stdlib.h>
  3 struct node{
  4     int data;
  5     struct node *prev;
  6     struct node *next;
  7 };
  8 struct node *head=NULL;
  9 void insertBegin()
 10 {
 11     struct node *newnode;
 12     newnode=(struct node*)malloc (sizeof(struct node));
 13     printf("enter data:");
 14     scanf("%d",&newnode->data);
 15     newnode->prev=NULL;
 16     newnode->next=head;
 17     if(head!=NULL)
 18         head->prev=newnode;
 19     head=newnode;
 20     printf("node inserted at beginning\n");
 21 }
 22 void insertend()
 23 {
 24     struct node *newnode, *temp;
 25     newnode=(struct node*)malloc (sizeof(struct node));
 26     printf("enter data:");
 27     scanf("%d",&newnode->data);
 28     newnode->next=NULL;
 29     if(head==NULL)
 30     {
 31         newnode->prev=NULL;
 32         head=newnode;
 33     }
 34     else
 35     {
 36         temp=head;
 37         while(temp->next!=NULL)
 38             temp=temp->next;
 39         temp->next=newnode;
 40         newnode->prev=temp;
 41     }
 42     printf("node inserted at end .\n");
 43 }
 44 void displayforward()
 45 {
 46     struct node *temp=head;
 47     if(head==NULL)
 48     {
 49         printf("list is empty.\n");
 50         return;
 51     }
 52     printf("forward list:");
 53     while(temp!=NULL)
 54     {
 55         printf("%d<->",temp->data);
 56         temp=temp->next;
 57     }
 58     printf("NULL\n");
 59 }
 60 void deletenode()
 61 {
 62     struct node *temp=head;
 63     int value;
 64     if(head==NULL)
 65     {
 66         printf("list is empty\n");
 67         return;
 68     }
 69     printf("enter value to delete:");
 70     scanf("%d",&value);
 71     while(temp!=NULL && temp->data!=value)
 72         temp=temp->next;
 73     if(temp==NULL)
 74     {
 75         printf("node not found \n");
 76         return;
 77     }
 78     if(temp->prev!=NULL)
 79         temp->prev->next=temp->next;
 80     else
 81         head=temp->next;
 82     if(temp->next!=NULL)
 83         temp->next->prev=temp->prev;
 84     free(temp);
 85     printf("node deleted successfully.\n");
 86 }
 87 void displayreverse()
 88 {
 89     struct node *temp=head;
 90     if(head==NULL)
 91     {
 92         printf("list is empty.\n");
 93         return;
 94     }
 95     while(temp->next!=NULL)
 96         temp=temp->next;
 97     printf("reverse list:");
 98     while(temp!=NULL)
 99     {
100         printf("%d<->",temp->data);
101         temp=temp->prev;
102     }
103         printf("NULL\n");
104 }
105 int main()
106 {
107     int choice;
108     do
109     {
110         printf("\n---doubly linked list---\n");
111         printf("1.insert at beginning\n2.insert at end\n3.displ    ay forward\n4.delete a node\n5.display reverse\n6.exit\n");
112         printf("enter your choice:");
113         scanf("%d",&choice);
114         switch (choice)
115         {
116             case 1:
117                 insertBegin();
118                 break;
119             case 2:
120                 insertend();
121                 break;
122             case 3:
123                 displayforward();
124                 break;
125             case 4:
126                 deletenode();
127                 break;
128             case 5:
129                 displayreverse();
130                 break;
131             case 6:
132                 printf("exiting program.\n");
133                 break;
134             default:
135                 printf("invalid choice. Try again.\n");
136         }
137
138         } while(choice != 6);
139
140               return 0;
141
142     }
                            
