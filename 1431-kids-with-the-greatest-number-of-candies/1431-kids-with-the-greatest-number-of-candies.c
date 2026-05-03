/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize)
{
    int maxCandies = candies[0];
    for(int i = 0; i < candiesSize; i++)
    {
        if(maxCandies < candies[i]) maxCandies = candies[i];
    }

    bool* result = (bool*)malloc(sizeof(bool) * candiesSize);
    *returnSize = candiesSize;

    for(int i = 0; i < candiesSize; i++)
    {
        if(candies[i] + extraCandies >= maxCandies)
        {
            result[i] = true;
        }
        else result[i] = false;
    }
    return result;
}