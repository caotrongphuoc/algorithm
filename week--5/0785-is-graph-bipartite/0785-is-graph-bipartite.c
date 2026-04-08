bool dfs(int** graph, int* graphColSize, int* color, int node, int c)
{
    color[node] = c;
    for(int i = 0; i < graphColSize[node]; i++)
    {
        int neighbor = graph[node][i];
        if(color[neighbor] == -1)
        {
            if(!dfs(graph, graphColSize, color, neighbor, 1 - c))
            {
                return false;
            }
        }
        else if (color[neighbor] == c)
        {
            return false;
        }
    }
    return true;
}

bool isBipartite(int** graph, int graphSize, int* graphColSize) 
{
    int color[graphSize];
    for(int i = 0; i < graphSize; i++)
    {
        color[i] = -1;
    }
    for(int i = 0; i < graphSize; i++)
    {
        if(color[i] == -1)
        {
            if(!dfs(graph, graphColSize, color, i, 0))
            {
                return false;
            }
        }
    }
    return true;
}