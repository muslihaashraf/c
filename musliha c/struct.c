 1 #include<stdio.h>
  2 struct book{
  3     int id;
  4     char bookname;
  5     char authorname;
  6     int price;
  7
  8 };
  9
 10 int main(){
 11    struct  book b1;
 12     printf("enter book id");
 13     scanf("%d",&b1.id);
 14     printf("enter book name:");
 15     scanf("%c",&b1.bookname);
 16     printf("enter author name:");
 17     scanf("%c",&b1.authorname);
 18     printf("enter price:");
 19     scanf("%d",&b1.price);
 20 }

output:-
