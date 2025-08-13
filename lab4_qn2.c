//Given a stack, sort it using recursion. Use of any loop constructs like while, for, etc. is not allowed. Only use the following functions on Stack S.
#include <stdio.h>
#define MAX 100
int stack[MAX];
int top = -1;
// Stack operations
int isEmpty() {
    return top == -1;
}
void push(int x) {
    if (top == MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = x;
}

int pop() {
    if (isEmpty()) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack[top--];
}

int topElement() {
    if (isEmpty()) {
        return -1;
    }
    return stack[top];
}

// Recursive function to insert element in sorted order
void insertInSortedOrder(int x) {
    if (isEmpty() || topElement() <= x) {
        push(x);
        return;
    }

    int temp = pop();
    insertInSortedOrder(x);
    push(temp);
}

// Recursive function to sort the stack
void sortStack() {
    if (!isEmpty()) {
        int temp = pop();
        sortStack();
        insertInSortedOrder(temp);
    }
}

// Display stack (for debugging)
void displayStack() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return;
    }

    printf("Stack from bottom to top: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// Main function to test
int main() {
    push(30);
    push(10);
    push(50);
    push(20);

    printf("Original Stack:\n");
    displayStack();

    sortStack();

    printf("Sorted Stack:\n");
    displayStack();

    return 0;
}
