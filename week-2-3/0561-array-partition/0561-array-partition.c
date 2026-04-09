int compare(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}

int arrayPairSum(int* nums, int numsSize) 
{
    //sap xep theo tu tu tang dan
    qsort(nums, numsSize, sizeof(int), compare);
    int sum = 0; //Khoi tao tong ban dau la 0
    for(int i = 0; i < numsSize; i += 2)
    {
        sum += nums[i];
    } 
    return sum;
}