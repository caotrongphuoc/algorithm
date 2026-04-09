int nearestExit(char** maze, int mazeSize, int* mazeColSize, int* entrance, int entranceSize) 
{
    int rows = mazeSize;
    int cols = mazeColSize[0];

    int dirs[4][2] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

    int queue[rows * cols][3];
    int front = 0;
    int back = 0;

    queue[back][0] = entrance[0];
    queue[back][1] = entrance[1];
    queue[back][2] = 0;
    back++;

    maze[entrance[0]][entrance[1]] = '+';

    while(front < back)
    {
        int r = queue[front][0];
        int c = queue[front][1];
        int steps = queue[front][2];
        front++;

        for(int i = 0; i < 4; i++)
        {
            int nr = r + dirs[i][0];
            int nc = c + dirs[i][1];

            if(nr < 0 || nr >= rows || nc < 0 || nc >= cols) continue;
            if(maze[nr][nc] == '+') continue;
            if(nr == 0 || nr == rows - 1 || nc == 0 || nc == cols - 1) return steps + 1;

            maze[nr][nc] = '+';
            queue[back][0] = nr;
            queue[back][1] = nc;
            queue[back][2] = steps + 1;
            back++;
        }
    }
    return - 1;
}