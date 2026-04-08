/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) 
{
    int *result = (int*)calloc(temperaturesSize, sizeof(int));
    int *stack = (int*)malloc(sizeof(int) * temperaturesSize);
    int top = -1;
    for(int i = 0; i < temperaturesSize; i++)
    {
        while(top >= 0 && temperatures[i] > temperatures[stack[top]])
        {
            int prev = stack[top--];
            result[prev] = i - prev;
        }
        stack[++top] = i;
    }
    *returnSize = temperaturesSize;
    free(stack);
    return result;
}