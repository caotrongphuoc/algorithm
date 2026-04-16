int maxSubArray(int* nums, int numsSize) 
{
    int sum = nums[0]; //tong hien tai
    int maxSum = nums[0]; //tong lon nhat tinh toi hien tai
    if(numsSize <= 1) return nums[0];
    for(int i = 1; i < numsSize; i++)
    {
        if(sum + nums[i] < nums[i])
        {
            sum = nums[i];
        }
        else sum += nums[i];
        if(sum > maxSum) maxSum = sum;
    }
    return maxSum;
}