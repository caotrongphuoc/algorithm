int minSubArrayLen(int target, int* nums, int numsSize) 
{
    int left = 0;
    int sum = 0;
    int minSize = numsSize + 1;

    for(int right = 0; right < numsSize; right++)
    {
        sum += nums[right];
        while(sum >= target)
        {
            int size = right - left + 1;
            if(size < minSize)
            {
                minSize = size;
            }
            sum = sum - nums[left];
            left++;
        }
    }
    return (minSize == numsSize + 1) ? 0 : minSize;
}