// Implement a Stack using an array having following functionalities.
#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;
int isEmpty() {
    return top == -1;
}
int isFull() {
    return top == MAX - 1;
}
void push(int value) {
    if (isFull()) {
        printf("Stack is full!\n");
    } else {
        stack[++top] = value;
    }
}

int pop() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return -1;
    } else {
        return stack[top--];
    }
}
void print_top() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
    } else {
        printf("Top element is: %d\n", stack[top]);
    }
}

void display() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(5);
    push(20);
    print_top();
    pop();
    print_top();
    display();
    return 0;
}
