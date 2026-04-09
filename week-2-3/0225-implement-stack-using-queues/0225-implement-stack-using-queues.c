


typedef struct 
{
    int *queue;
    int front;
    int rear;
    int size;
    int capacity;    
} MyStack;


MyStack* myStackCreate() 
{
    //Khoi tao
    MyStack *obj = (MyStack*)malloc(sizeof(MyStack));
    obj->capacity = 100;
    //Cap phat mang bo nho cho queue
    obj->queue = (int*)malloc(sizeof(int) * obj->capacity);
    obj->front = 0;
    obj->rear = -1;
    obj->size = 0;
    return obj;    
}

void myStackPush(MyStack* obj, int x) 
{
    obj->rear++;
    obj->queue[obj->rear] = x;
    obj->size++;
    for(int i = 0; i < obj->size - 1; i++)
    {
        int temp = obj->queue[obj->front];
        obj->front++;
        obj->rear++;
        obj->queue[obj->rear] = temp;
    }
}

int myStackPop(MyStack* obj) 
{
    if(obj->size == 0) return -1;
    int val = obj->queue[obj->front];
    obj->front++;
    obj->size--;
    return val;  
}

int myStackTop(MyStack* obj) 
{
    if(obj->size == 0) return -1;
    return obj->queue[obj->front];    
}

bool myStackEmpty(MyStack* obj) 
{
    if(obj->size == 0) return true;
    else return false;    
}

void myStackFree(MyStack* obj) 
{
    free(obj->queue);
    free(obj);    
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/