char* removeOuterParentheses(char* s) 
{
    int d = 0;
    int k = 0;
    char* result = malloc(sizeof(char) * strlen(s));
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == '(')
        {
            if(d > 0)
            {
                result[k++] = s[i];
            }
            d++;
        }
        else
        {
            d--;
            if(d > 0)
            {
                result[k++] = s[i];
            }
        }
        result[k] = '\0';
    }
    return result;    
}