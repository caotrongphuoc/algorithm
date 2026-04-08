#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* largestNumber(int* nums, int numsSize) 
{
    for(int i = 0; i < numsSize; i++)
    {
        for(int j = i + 1; j < numsSize; j++)
        {
            char ab[100];
            char ba[100];

            sprintf(ab, "%d%d", nums[i], nums[j]);
            sprintf(ba, "%d%d", nums[j], nums[i]);

            if(strcmp(ab, ba) < 0)
            {
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    char* c = malloc(1000);
    c[0] = '\0';

    for(int i = 0; i < numsSize; i++)
    {
        char temp[20];
        sprintf(temp, "%d", nums[i]);
        strcat(c, temp);
    }

    if(c[0] == '0')
    {
        c[1] = '\0';
    }
    return c;
}