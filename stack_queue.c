// C code in stack_queue.c

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 10

// Structure for Stack
struct Stack {
    int items[MAX_SIZE];
    int top;
};

// Structure for Queue
struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};

struct Stack stack;
struct Queue queue;

// Initialize Stack
void initStack() {
    stack.top = -1;
}

// Initialize Queue
void initQueue() {
    queue.front = 0;
    queue.rear = -1;
}

// Check if Stack is empty
bool isStackEmpty() {
    return stack.top == -1;
}

// Check if Queue is empty
bool isQueueEmpty() {
    return queue.rear < queue.front;
}

// Check if Stack is full
bool isStackFull() {
    return stack.top == MAX_SIZE - 1;
}

// Check if Queue is full
bool isQueueFull() {
    return queue.rear == MAX_SIZE - 1;
}

// Push an item to Stack
void pushToStack(int value) {
    if (!isStackFull()) {
        stack.items[++stack.top] = value;
    } else {
        printf("Stack is full. Cannot push %d.\n", value);
    }
}

// Pop an item from Stack
void popFromStack() {
    if (!isStackEmpty()) {
        printf("Popped %d from Stack.\n", stack.items[stack.top]);
        stack.top--;
    } else {
        printf("Stack is empty. Cannot pop.\n");
    }
}

// Enqueue an item to Queue
void enqueue(int value) {
    if (!isQueueFull()) {
        queue.items[++queue.rear] = value;
    } else {
        printf("Queue is full. Cannot enqueue %d.\n", value);
    }
}

// Dequeue an item from Queue
void dequeue() {
    if (!isQueueEmpty()) {
        printf("Dequeued %d from Queue.\n", queue.items[queue.front++]);
    } else {
        printf("Queue is empty. Cannot dequeue.\n");
    }
}

int main() {
    initStack();
    initQueue();

    // Example usage of the Stack and Queue
    pushToStack(10);
    pushToStack(20);
    pushToStack(30);

    popFromStack();
    popFromStack();

    enqueue(100);
    enqueue(200);
    enqueue(300);

    dequeue();
    dequeue();

    return 0;
}
