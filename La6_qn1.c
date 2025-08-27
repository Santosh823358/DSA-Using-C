#include <stdio.h>
#define SIZE 5

int queue[SIZE];
int front = -1, rear = -1;

int isFull() {
    return (front == (rear + 1) % SIZE);
}

int isEmpty() {
    return (front == -1);
}

void enqueue(int value) {
    if (isFull()) {
        printf("Queue is full!\n");
        return;
    }

    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % SIZE;
    }

    queue[rear] = value;
    printf("Inserted: %d\n", value);
}

void dequeue() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
        return;
    }

    int deleted = queue[front];

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % SIZE;
    }

    printf("Deleted: %d\n", deleted);
}

void frontElement() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("Front: %d\n", queue[front]);
    }
}

void rearElement() {
    if (isEmpty()) {
        printf("Queue is empty!\n");
    } else {
        printf("Rear: %d\n", queue[rear]);
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60); 

    frontElement(); 
    rearElement();   

    dequeue();
    dequeue();

    enqueue(60);
    enqueue(70);     

    frontElement();  
    rearElement();   

    return 0;
}
