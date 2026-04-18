char* sortString(char* s) {
    int a[26] = {0};
    for(int i = 0; i < strlen(s); i++)
    {
        a[s[i] - 'a']++;
    }
    char* result = (char*)malloc(strlen(s) + 1);
    int count = 0;
    while(count < strlen(s))
    {
        //tang dan
        for(int i = 0; i < 26; i++)
        {
            if(a[i] > 0)
            {
                result[count++] = i + 'a';
                a[i]--;
            }
        }
        //giam dan
        for(int i = 25; i >= 0; i--)
        {
            if(a[i] > 0)
            {
                result[count++] = i + 'a';
                a[i]--;
            }
        }
    }
    result[count] = '\0';
    return result;
}