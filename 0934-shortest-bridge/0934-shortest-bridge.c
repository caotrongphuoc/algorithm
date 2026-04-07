int q[10000][2], front, back;

void dfs(int** grid, int n, int i, int j)
{
    if(i < 0 || i >= n || j < 0 || j >= n || grid[i][j] != 1)
    {
        return;
    }

    grid[i][j] = 2;
    q[back][0] = i; q[back][1] = j; back++;
    dfs(grid, n, i - 1, j);
    dfs(grid, n, i + 1, j);
    dfs(grid, n, i, j - 1);
    dfs(grid, n, i, j + 1);
}

int shortestBridge(int** grid, int gridSize, int* gridColSize) 
{
    int n = gridSize, dx[] = {0, 0, 1, -1}, dy[] = {1, -1, 0, 0};
    front = back = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(grid[i][j] == 1)
            {
                dfs(grid, n, i, j);
                goto bfs;
            }
        }
    }
    bfs:
    for(int steps = 0; front < back; steps++)
    {
        int size = back - front;
        while(size--)
        {
            int r = q[front][0], c = q[front][1]; front++;
            for(int d = 0; d < 4; d++)
            {
                int nr = r + dx[d], nc = c + dy[d];
                if(nr < 0 || nr >= n || nc < 0 || nc >= n || grid[nr][nc] == 2) continue;
                if(grid[nr][nc] == 1) return steps;
                grid[nr][nc] = 2;
                q[back][0] = nr; q[back][1] = nc; back++;
            }
        }
    }
    return -1;
}