int majorityElement(int* nums, int numsSize) 
{
    int count = 0;
    int found = 0;
    for(int i = 0; i < numsSize; i++)
    {
        if(count == 0) found = nums[i];
        if(found == nums[i]) count++;
        else count--;
    } 
    return found;
}