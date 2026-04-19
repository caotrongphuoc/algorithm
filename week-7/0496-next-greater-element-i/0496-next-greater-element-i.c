/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextGreaterElement(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int *result = (int*)malloc(sizeof(int) * nums1Size);
    *returnSize = nums1Size;

    for(int i = 0; i < nums1Size; i++) {
        int found = 0; 
        for(int j = 0; j < nums2Size; j++) {
            if(nums2[j] == nums1[i]) {
                found = j;
                break;
            }
        }
        int greater = -1;
        for(int j = found + 1; j < nums2Size; j++) {
            if(nums2[j] > nums1[i]) {
                greater = nums2[j];
                break;
            }
            else {
                greater = -1;
            }
        }
        result[i] = greater;
    }
    return result;
}