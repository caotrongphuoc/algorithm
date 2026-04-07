#include <stdlib.h>
#include <stdbool.h>

typedef struct 
{
    int *data;
    int k;
    int front;
    int rear;
} MyCircularQueue;


MyCircularQueue* myCircularQueueCreate(int k) 
{
    MyCircularQueue *obj = (MyCircularQueue*)malloc(sizeof(MyCircularQueue));
    obj->data = (int*)malloc(sizeof(int) * k);
    obj->k = k;
    obj->front = -1;
    obj->rear = -1;
    return obj;
}


bool myCircularQueueIsEmpty(MyCircularQueue* obj) 
{
    return obj->front == -1;
}


bool myCircularQueueIsFull(MyCircularQueue* obj) 
{
    return (obj->rear + 1) % obj->k == obj->front;
}


bool myCircularQueueEnQueue(MyCircularQueue* obj, int value) 
{
    if(myCircularQueueIsFull(obj)) 
        return false;

    if(myCircularQueueIsEmpty(obj)) 
        obj->front = 0;

    obj->rear = (obj->rear + 1) % obj->k;
    obj->data[obj->rear] = value;

    return true;
}


bool myCircularQueueDeQueue(MyCircularQueue* obj) 
{
    if(myCircularQueueIsEmpty(obj)) 
        return false;

    if(obj->front == obj->rear)
    {
        obj->front = -1;
        obj->rear = -1;
    }
    else
    {
        obj->front = (obj->front + 1) % obj->k;
    }

    return true;
}


int myCircularQueueFront(MyCircularQueue* obj) 
{
    if(myCircularQueueIsEmpty(obj)) 
        return -1;

    return obj->data[obj->front];
}


int myCircularQueueRear(MyCircularQueue* obj) 
{
    if(myCircularQueueIsEmpty(obj)) 
        return -1;

    return obj->data[obj->rear];
}


void myCircularQueueFree(MyCircularQueue* obj) 
{
    free(obj->data);
    free(obj);
}