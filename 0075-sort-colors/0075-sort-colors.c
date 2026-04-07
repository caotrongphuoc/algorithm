void sortColors(int* nums, int numsSize) 
{ 
    int low = 0; //Red
    int mid = 0; //White, vi tri dang xet luc dau la 0 roi tang len
    int high = numsSize - 1; //Blue

    while(mid <= high)
    {
        if(nums[mid] == 0)
        {
            int temp = nums[low];
            nums[low] = nums[mid];
            nums[mid] = temp;
            low++;
            mid++;
        }
        else if(nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            int temp = nums[high];
            nums[high] = nums[mid];
            nums[mid] = temp;
            high--;
        }
    }
}