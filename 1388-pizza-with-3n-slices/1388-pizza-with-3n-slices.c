int max(int a, int b)
{
    return a > b ? a : b;
}

//solve tuyen tinh voi O(k) space
int solve(int *arr, int n, int k)
{
    int *prev = (int*)calloc(k + 1, sizeof(int));
    int *curr = (int*)calloc(k + 1, sizeof(int));
    int *prev2 = (int*)calloc(k + 1, sizeof(int));

    for(int i = 0; i < n; i++)
    {
        for(int j = 1; j <= k; j++)
        {
            //Ko chon
            curr[j] = prev[j];

            //Chon
            int take = arr[i];
            if(i >= 1)
            {
                take += prev2[j - 1];
            }
                curr[j] = max(curr[j], take);
        }

            //dich mang
            int* temp = prev2;
            prev2 = prev;
            prev = curr;
            curr = temp;
    }

    int res = prev[k];

    free(prev);
    free(curr);
    free(prev2);

    return res;
}

int maxSizeSlices(int* slices, int slicesSize) 
{
   int k = slicesSize / 3;

   //case 1: bo cuoi
   int res1 = solve(slices, slicesSize - 1, k);

   //case 2: bo dau
   int res2 = solve(slices + 1, slicesSize - 1, k);

   return max(res1, res2);
}