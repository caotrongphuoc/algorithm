void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) 
{
    int i = m - 1; //Phan tu cuoi cua mang num1
    int j = n - 1; //Phan tu cuoi cua mang num2
    int k = m + n - 1; //Phan tu cuoi cua mang khoi tao

    while(i >= 0 && j >= 0)
    {
        if(nums2[j] > nums1[i])
        {
            nums1[k] = nums2[j];
            j--;
        }
        else
        {
            nums1[k] = nums1[i];
            i--;
        }
        k--;
    }
    while(j >= 0)
    {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}