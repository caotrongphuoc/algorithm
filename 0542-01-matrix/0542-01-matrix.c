/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** updateMatrix(int** mat, int matSize, int* matColSize, int* returnSize, int** returnColumnSizes) 
{
    int rows = matSize;
    int cols = matColSize[0];

    int **dist = (int**)malloc(sizeof(int*) * rows);
    *returnColumnSizes = (int*)malloc(sizeof(int) * rows);

    for(int i = 0; i < rows; i++)
    {
        dist[i] = (int*)malloc(sizeof(int) * cols);
        (*returnColumnSizes)[i] = cols;
    }
    *returnSize = rows;

    int *qR = (int*)malloc(sizeof(int) * cols * rows * 4);
    int *qC = (int*)malloc(sizeof(int) * cols * rows * 4);

    int front = 0;
    int rear = 0;

    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            if(mat[i][j] == 0)
            {
                dist[i][j] = 0;
                qR[rear] = i;
                qC[rear] = j;
                rear++;
            }
            else
            { 
                dist[i][j] = INT_MAX;
            }
        }
    }
    int dr[] = {-1, 1, 0, 0};
    int dc[] = {0, 0, -1, 1};

    while(front < rear)
    {
        int r = qR[front];
        int c = qC[front];
        front++;
        for(int d = 0; d < 4; d++)
        {
            int nr = r + dr[d];
            int nc = c + dc[d];

            if(nr >= 0 && nr < rows && nc >= 0 && nc < cols)
            {
                if(dist[nr][nc] > dist[r][c] + 1)
                {
                    dist[nr][nc] = dist[r][c] + 1;
                    qR[rear] = nr;
                    qC[rear] = nc;
                    rear++;
                }
            }
        }
    }
    free(qR);
    free(qC);
    return dist;
}
