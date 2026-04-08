bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) 
{
    int x[10000] = {0};
    int y[10000] = {0};
    int k = 0;
    int m = 0;
    for(int i = 0; i < word1Size; i++)
    {
        for(int j = 0; word1[i][j] != '\0'; j++)
        {
            x[k++] = word1[i][j];
        }
    }
    for(int i = 0; i < word2Size; i++)
    {
        for(int j = 0; word2[i][j] != '\0'; j++)
        {
            y[m++] = word2[i][j];
        }
    }
    int i = 0;
    while(x[i] != '\0' || y[i] != '\0')
    {
        if(x[i] != y[i]) return false;
        i++;
    }
    return true;
}