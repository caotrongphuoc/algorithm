int lengthOfLongestSubstring(char* s) 
{
    int max = 0;
    for(int i = 0; s[i] != '\0'; i++)
    {
        int count = 0;
        for(int j = i; s[j] != '\0'; j++)
        {
            int repeat = 0;
            for(int k = i; k < j; k++)
            {
                if(s[k] == s[j])
                {
                    repeat = 1;
                    break;
                }
            }
            if(repeat != 0) break;
            count++;
            if(max < count) max = count;
        }
    }
    return max;
}