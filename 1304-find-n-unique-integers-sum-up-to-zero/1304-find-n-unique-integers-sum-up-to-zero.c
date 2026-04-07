/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sumZero(int n, int* returnSize) 
{
    int *result = (int*)malloc(sizeof(int) * n);
    *returnSize = n;
    int idx = 0;
    for(int i = 1; i <= n / 2; i++)
    {
        result[idx++] = i;
        result[idx++] = -i;
    }
    if(n % 2 != 0) result[idx] = 0;
    return result;
}