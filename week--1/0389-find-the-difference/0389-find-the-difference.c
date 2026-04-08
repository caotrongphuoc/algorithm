char findTheDifference(char* s, char* t) 
{
    int count[26] = {0};
    for(int i = 0; s[i] != '\0'; i++)
    {
        count[s[i] - 'a']++;
    }
    for(int i = 0; t[i] != '\0'; i++)
    {
        count[t[i] - 'a']--;
        if(count[t[i] - 'a'] < 0) return t[i];
    }
    return 0;
}