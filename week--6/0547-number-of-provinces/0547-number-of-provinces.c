void dfs(int** isConnected, int n, bool* visited, int i)
{
    visited[i] = true;
    for(int j = 0; j < n; j++)
    {
        if(isConnected[i][j] == 1 && !visited[j])
        {
            dfs(isConnected, n, visited, j);
        }
    }
}

int findCircleNum(int** isConnected, int isConnectedSize, int* isConnectedColSize) 
{
    int n = isConnectedSize;
    bool* visited = calloc(n, sizeof(bool));
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(!visited[i])
        {
            count++;
            dfs(isConnected, n, visited, i);
        }
    }
    free(visited);
    return count;
}