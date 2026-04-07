/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* searchRange(int* nums, int numsSize, int target, int* returnSize) 
{
    int* result = (int*)malloc(sizeof(int) * 2);
    *returnSize = 2;
    result[0] = -1;
    result[1] = -1;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] == target)
        {
            result[0] = i;
            break;
        }
    }
    for(int i = numsSize - 1; i >= 0; i--)
    {
        if(nums[i] == target)
        {
            result[1] = i;
            break;
        }
    }
    return result;   
}