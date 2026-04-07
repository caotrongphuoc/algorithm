


typedef struct 
{
    int *data;
    int front;
    int rear;
    int size;
    int capacity;    
} MyQueue;


MyQueue* myQueueCreate() 
{
    MyQueue* obj = (MyQueue*)malloc(sizeof(MyQueue));
    obj->capacity = 100;
    obj->data = (int*)malloc(sizeof(int) * obj->capacity);
    obj->front = 0;
    obj->rear = -1;
    obj->size = 0;
    return obj;       
}

void myQueuePush(MyQueue* obj, int x) 
{
    obj->rear++;
    obj->data[obj->rear] = x;
    obj->size++;    
}

int myQueuePop(MyQueue* obj) 
{
    int val = obj->data[obj->front];
    obj->front++;
    obj->size--;
    return val;    
}

int myQueuePeek(MyQueue* obj) 
{
    if(obj->size == 0) return -1;
    return obj->data[obj->front];    
}

bool myQueueEmpty(MyQueue* obj) 
{
    if(obj->size == 0) return true;
    else return false;    
}

void myQueueFree(MyQueue* obj) 
{
    free(obj->data);
    free(obj);    
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/