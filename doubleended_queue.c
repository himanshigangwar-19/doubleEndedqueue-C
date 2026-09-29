#include <stdio.h>

#define SIZE 10

int deque[SIZE];
int front = -1;
int rear = -1;

void insertFront(int value)
{
    if (front == 0)
    {
        printf("Cannot Insert at Front\n");
        return;
    }

    if (front == -1)
    {
        front = rear = 5;
    }
    else
    {
        front--;
    }

    deque[front] = value;
}

void insertRear(int value)
{
    if (rear == SIZE - 1)
    {
        printf("Cannot Insert at Rear\n");
        return;
    }

    if (front == -1)
    {
        front = rear = 5;
    }
    else
    {
        rear++;
    }

    deque[rear] = value;
}

void deleteFront()
{
    printf("Deleted from Front: %d\n", deque[front]);

    if (front == rear)
        front = rear = -1;
    else
        front++;
}

void deleteRear()
{
    printf("Deleted from Rear: %d\n", deque[rear]);

    if (front == rear)
        front = rear = -1;
    else
        rear--;
}

void display()
{
    int i;

    printf("Remaining Elements: ");

    for (i = front; i <= rear; i++)
        printf("%d ", deque[i]);

    printf("\n");
}

int main()
{
    insertFront(10);
    insertRear(20);
    insertFront(30);

    deleteFront();
    deleteRear();

    display();

    return 0;
}