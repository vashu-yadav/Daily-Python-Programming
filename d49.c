#include <stdlib.h>
#include <stdbool.h>

#define STACK_SIZE 1000

typedef struct {
    int s1[STACK_SIZE];
    int s2[STACK_SIZE];
    int top1;
    int top2;
} MyQueue;

// Create queue
MyQueue* myQueueCreate() {
    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
    obj->top1 = -1;
    obj->top2 = -1;
    return obj;
}

// Push element to back
void myQueuePush(MyQueue* obj, int x) {
    obj->s1[++obj->top1] = x;
}

// Transfer elements from s1 to s2
void transfer(MyQueue* obj) {
    while (obj->top1 != -1) {
        obj->s2[++obj->top2] = obj->s1[obj->top1--];
    }
}

// Pop element from front
int myQueuePop(MyQueue* obj) {
    if (obj->top2 == -1) {
        transfer(obj);
    }
    return obj->s2[obj->top2--];
}

// Get front element
int myQueuePeek(MyQueue* obj) {
    if (obj->top2 == -1) {
        transfer(obj);
    }
    return obj->s2[obj->top2];
}

// Check if empty
bool myQueueEmpty(MyQueue* obj) {
    return (obj->top1 == -1 && obj->top2 == -1);
}

// Free memory
void myQueueFree(MyQueue* obj) {
    free(obj);
}