/*
 * // This is the definition for customFunction API.
 * // You should not implement it, or speculate about its implementation
 *
 * // Returns f(x, y) for any given positive integers x and y.
 * // Note that f(x, y) is increasing with respect to both x and y.
 * // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 */

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** findSolution(int (*customFunction)(int, int), int z, int* returnSize, int** returnColumnSizes) 
{
    int capacity = 1000;
    int **result = (int**)malloc(sizeof(int*) * capacity);
    *returnColumnSizes = (int*)malloc(sizeof(int) * capacity);
    *returnSize = 0;

    int x = 1;
    int y = 1000;

    while(x <= 1000 && y >= 1)
    {
        int val = customFunction(x, y);

        if(val == z)
        {
            result[*returnSize] = (int*)malloc(sizeof(int) * 2);
            result[*returnSize][0] = x;
            result[*returnSize][1] = y;
            (*returnColumnSizes)[*returnSize] = 2;
            (*returnSize)++;
            x++;
            y--;
        }
        else if(val > z) y--;
        else x++;
    }
    return result;
}