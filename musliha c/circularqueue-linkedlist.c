#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue()
{
    struct node *newnode;
    int x;

    newnode = (struct node *)malloc(sizeof(struct node));

    printf("Enter the data: ");
    scanf("%d", &x);

    newnode->data = x;

    if(front == NULL)
    {
        front = rear = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }

    printf("Element inserted successfully\n");
}

void dequeue()
{
    struct node *temp;

    if(front == NULL)
    {
        printf("Queue is empty\n");
    }
    else if(front == rear)
    {
        temp = front;
        printf("Deleted element: %d\n", temp->data);
        front = rear = NULL;
        free(temp);
    }
    else
    {
        temp = front;
        printf("Deleted element: %d\n", temp->data);
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

void display()
{
    struct node *temp;

    if(front == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        temp = front;

        printf("Queue elements are: ");

        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
        while(temp != front);

        printf("\n");
    }
}


int main()
{
    int ch;

    while(1)
    {
        printf("\n1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid choice\n");
        }
    }
}