#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int *arr;
    int front;
    int rear;
    int size;
    int capacity;
} MyCircularDeque;

// Constructor
MyCircularDeque* myCircularDequeCreate(int k) {
    MyCircularDeque* obj = (MyCircularDeque*)malloc(sizeof(MyCircularDeque));
    obj->arr = (int*)malloc(sizeof(int) * k);
    obj->capacity = k;
    obj->size = 0;
    obj->front = 0;
    obj->rear = 0;
    return obj;
}

// Insert at front
bool myCircularDequeInsertFront(MyCircularDeque* obj, int value) {
    if (obj->size == obj->capacity)
        return false;

    obj->front = (obj->front - 1 + obj->capacity) % obj->capacity;
    obj->arr[obj->front] = value;
    obj->size++;
    return true;
}

// Insert at rear
bool myCircularDequeInsertLast(MyCircularDeque* obj, int value) {
    if (obj->size == obj->capacity)
        return false;

    obj->arr[obj->rear] = value;
    obj->rear = (obj->rear + 1) % obj->capacity;
    obj->size++;
    return true;
}

// Delete from front
bool myCircularDequeDeleteFront(MyCircularDeque* obj) {
    if (obj->size == 0)
        return false;

    obj->front = (obj->front + 1) % obj->capacity;
    obj->size--;
    return true;
}

// Delete from rear
bool myCircularDequeDeleteLast(MyCircularDeque* obj) {
    if (obj->size == 0)
        return false;

    obj->rear = (obj->rear - 1 + obj->capacity) % obj->capacity;
    obj->size--;
    return true;
}

// Get front
int myCircularDequeGetFront(MyCircularDeque* obj) {
    if (obj->size == 0)
        return -1;

    return obj->arr[obj->front];
}

// Get rear
int myCircularDequeGetRear(MyCircularDeque* obj) {
    if (obj->size == 0)
        return -1;

    int index = (obj->rear - 1 + obj->capacity) % obj->capacity;
    return obj->arr[index];
}

// Check empty
bool myCircularDequeIsEmpty(MyCircularDeque* obj) {
    return obj->size == 0;
}

// Check full
bool myCircularDequeIsFull(MyCircularDeque* obj) {
    return obj->size == obj->capacity;
}

// Free memory
void myCircularDequeFree(MyCircularDeque* obj) {
    free(obj->arr);
    free(obj);
}