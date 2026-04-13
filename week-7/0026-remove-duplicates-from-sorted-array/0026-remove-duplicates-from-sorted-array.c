int removeDuplicates(int* nums, int numsSize) 
{
    int k = 1;
    for(int i = 0; i < numsSize; i++)
    {
        if(nums[i] != nums[k - 1])
        {
            nums[k] = nums[i];
            k++;
        }
    }
    return k;
}