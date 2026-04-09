char* makeGood(char* s) 
{
    int n = strlen(s);
    char *stack = (char*)malloc(n + 1);
    int top = -1; //stack dang rong
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(top >= 0 && abs(stack[top] - s[i]) == 32)
        {
            top--;
        }
        else
        {
            stack[++top] = s[i];
        }
    }    
    stack[top + 1] = '\0';
    return stack;
}