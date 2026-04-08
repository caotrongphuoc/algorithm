typedef struct
{
    int x, y;
} Node;
int orangesRotting(int** grid, int gridSize, int* gridColSize) 
{
    int rows = gridSize;
    int cols = gridColSize[0];

    Node queue[rows * cols];
    int front = 0, rear = 0;

    int fresh = 0;

    int dx[4] = {-1, 1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(grid[i][j] == 2)
            {
                queue[rear++] = (Node){i, j};
            }
            else if(grid[i][j] == 1)
            {
                fresh++;
            }
        }
    }
    if(fresh == 0) return 0;

    int minutes = 0;

    while(front < rear)
    {
        int size = rear - front;
        int spread = 0;

        for(int i = 0; i < size; i++)
        {
            Node cur = queue[front++];
            for(int d = 0; d < 4; d++)
            {
                int nx = cur.x + dx[d];
                int ny = cur.y + dy[d];

                if(nx >= 0 && nx < rows && ny >= 0 && ny < cols && grid[nx][ny] == 1)
                {
                    grid[nx][ny] = 2;
                    queue[rear++] = (Node){nx, ny};
                    fresh--;
                    spread = 1;
                }
            }
        }
        if(spread)
        {
            minutes++;
        }
    }
    return (fresh == 0) ? minutes : -1;
}