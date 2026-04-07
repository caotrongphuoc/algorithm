int thirdMax(int* nums, int numsSize) 
{
    //Sap xep lai mang theo chieu tang dan
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            if(nums[i] > nums[j])
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    //Tim third distinct max, di tu cuoi mang tro ve
    int count = 1; //So lon nhat  = numsSize - 1
    for(int i = numsSize - 2; i >= 0; i--)
    {
        if(nums[i] != nums[i + 1])
        {
            count++;
        }
        if(count == 3) return nums[i];
    }
    return nums[numsSize - 1];
}