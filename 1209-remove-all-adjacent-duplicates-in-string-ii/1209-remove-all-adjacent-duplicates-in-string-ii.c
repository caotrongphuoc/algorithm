char* removeDuplicates(char* s, int k) 
{
    int n = strlen(s);

    char* stack = (char*)malloc(sizeof(char) * (n + 1));
    int* count = (int*)malloc(sizeof(int) * (n + 1));

    int top = -1;
    for(int i = 0; i < n; i++)
    {
        stack[++top] = s[i];
        if(top > 0 && stack[top] == stack[top - 1])
        {
            count[top] = count[top - 1] + 1;
        }
        else count[top] = 1;
        if(count[top] == k)
        {
            top = top - k;
        }
    }
    stack[top + 1] = '\0';
    free(count);
    return stack;
}