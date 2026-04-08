//1662. Check If Two String Arrays are Equivalent - https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/?envType=problem-list-v2&envId=w5s9pzgi
bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) 
{
    int w1[10000] = {0};
    int w2[10000] = {0};
    int k = 0;
    int m = 0;
    for(int i = 0; i < word1Size; i++)
    {
        for(int j = 0; word1[i][j] != '\0'; j++)
        {
            w1[k++] = word1[i][j];
        }
    }
    for(int i = 0; i < word2Size; i++)
    {
        for(int j = 0; word2[i][j] != '\0'; j++)
        {
            w2[m++] = word2[i][j];
        }
    }
    int i = 0;
    while(w1[i] != '\0' || w2[i] != '\0')
    {
        if(w1[i] != w2[i]) return false;
        i++;
    }
    return true;
}