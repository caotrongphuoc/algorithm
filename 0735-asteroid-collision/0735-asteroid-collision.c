/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) 
{
    int *stack = (int*)malloc(sizeof(int) * asteroidsSize);
    int top = -1;
    for(int i = 0; i < asteroidsSize; i++)
    {
        int a = asteroids[i];
        int destroyed = 0;
        while(top >= 0 && stack[top] > 0 && a < 0)
        {
            if(abs(stack[top]) < abs(a))
            {
                top--;
                continue;
            }
            else if(abs(stack[top]) == abs(a))
            {
                top--;
            }
            destroyed = 1;
            break;
        }
        if(destroyed == 0)
        {
            stack[++top] = a;
        }
    }
    *returnSize = top + 1;
    int *result = (int*)malloc(sizeof(int) * (*returnSize));
    for(int i = 0; i < *returnSize; i++)
    {
        result[i] = stack[i];
    }
    free(stack);
    return result;
}