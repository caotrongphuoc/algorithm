int missingNumber(int* nums, int numsSize) 
{
    for(int i = 0; i <= numsSize; i++)
    {
        int found = 0;
        for(int j = 0; j < numsSize; j++)
        {
            if(nums[j] == i)
            {
                found = 1;
                break;
            }
        }
        if(found == 0) return i;
    }
    return 0;
}