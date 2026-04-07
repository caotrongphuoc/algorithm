//Valid Parentheses - https://leetcode.com/problems/valid-parentheses/?envType=problem-list-v2&envId=w5s9pzgi
bool isValid(char* s) 
{
    int stack[10000];
    int top = -1;

    for(int i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];
        if(c == '(' || c == '{' || c == '[')
        {
            stack[++top] = c;
        }
        else
        {
            if(top == -1) return false;
            else
            {
                char t = stack[top--];
                if((c == ')' && t != '(') || 
                   (c == '}' && t != '{') || 
                   (c == ']' && t != '[')) return false;
            }
        }
    }
    return top == -1;
}