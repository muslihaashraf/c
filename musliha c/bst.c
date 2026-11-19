 1 #include<stdio.h>
  2 #include<stdlib.h>
  3 struct node{
  4     int data;
  5     struct node *left,*right;
  6 };
  7 struct node* newnode(int key){
  8     struct node* node=(struct node*)malloc(sizeof(struct node))    ;
  9     node->data=key;
 10     node->left=node->right=NULL;
 11     return node;
 12 }
 13 struct node* insert(struct node* root,int key){
 14     if(root==NULL)
 15         return newnode(key);
 16     if(key<root->data)
 17         root->left=insert(root->left,key);
 18     else if(key >root->data)
 19         root->right=insert(root->right,key);
 20     else
 21         printf("%d already exists.\n",key);
 22     return root;
 23 }
 24 struct node* minNode(struct node* root){
 25     while(root->left!=NULL)
 26         root=root->left;
 27     return root;
 28 }
 29 struct node* deleteNode(struct node* root,int key){
 30     if(root==NULL){
 31         printf("%d not found.\n",key);
 32         return NULL;
 33     }
 34     if(key<root->data)
 35         root->left=deleteNode(root->left,key);
 36     else if(key>root->data)
 37         root->right=deleteNode(root->right,key);
 38     else{
 39         if(root->left==NULL){
 40             struct node* temp=root->right;
 41             free(root);
 42             return temp;
 43         }
 44         if(root->right==NULL){
 45             struct node*temp=root->left;
 46             free(root);
 47             return temp;
 48         }
 49         struct node* succ = minNode(root->right);
 50         root->data=succ->data;
 51         root->right=deleteNode(root->right,succ ->data);
 52     }
 53     return root;
 54 }
 55 void inorder(struct node* root){
 56     if(root==NULL)return;
 57     inorder(root->left);
 58     printf("%d",root->data);
 59     inorder(root->right);
 60 }
 61 void preorder(struct node*root){
 62     if(root==NULL)return;
 63     printf("%d",root->data);
 64     preorder(root->left);
 65     preorder(root->right);
 66 }
 67 void postorder(struct node* root){
 68     if(root==NULL)return;
 69     postorder(root->left);
 70     postorder(root->right);
 71     printf("%d",root->data);
 72 }
 73 int main(){
 74     struct node* root=NULL;
 75     int choice,value;
 76     while(1){
 77         printf("\n--binary search--\n");
 78         printf("1.insert\n2.delete\n3.inorder\n4.preorder\n5.po    storder\n6.exit\n");
 79         printf("enter choice:");
 80         scanf("%d",&choice);
 81         switch(choice){
 82             case 1:
 83                 printf("enter value to insert:");
 84                 scanf("%d",&value);
 85                 root=insert(root,value);
 86                 break;
 87             case 2:
 88                 printf("enter value to delete:");
 89                 scanf("%d",&value);
 90                 root=deleteNode(root,value);
 91                 break;
 92             case 3:
 93                 printf("inorder:");
 94                 inorder(root);
 95                 printf("\n");
 96                 break;
 97             case 4:
 98                 printf("preorder:");
 99                 preorder(root);
100                 printf("\n");
101                 break;
102             case 5:
103                 printf("postorder:");
104                 postorder(root);
105                 printf("\n");
106                 break;
107             case 6:
108                 return 0;
109             default:
110                 printf("invalid choice.\n");
111         }
112     }
113 }
