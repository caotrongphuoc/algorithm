bool rotateString(char* s, char* goal) 
{
    if(strlen(s) != strlen(goal)) return false;
    char a[1000];
    strcpy(a, s);
    strcat(a, s);
    for(int i = 0; i < strlen(s); i++)
    {
        int j = 0;
        while(j < strlen(s) && a[i + j] == goal[j]) j++;
        if(j == strlen(s)) return true;
    }    
    return false;
}