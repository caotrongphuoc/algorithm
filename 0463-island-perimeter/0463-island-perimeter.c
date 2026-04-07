int islandPerimeter(int** grid, int gridSize, int* gridColSize) 
{
    int count = 0;
    for(int i = 0; i < gridSize; i++)
    {
        for(int j = 0; j < gridColSize[i]; j++)
        {
            if(grid[i][j] == 1)
            {
                if(i - 1 < 0 || grid[i-1][j] == 0) count++;
                if(i + 1 >= gridSize || grid[i+1][j] == 0) count++; 
                if(j - 1 < 0 || grid[i][j-1] == 0) count++; 
                if(j + 1 >= gridColSize[i] || grid[i][j+1] == 0) count++;
            }
        }
    }
    return count;
}