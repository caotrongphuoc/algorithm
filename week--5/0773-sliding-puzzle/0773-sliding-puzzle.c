int slidingPuzzle(int** board, int boardSize, int* boardColSize) 
{
    char start[7];
    int idx = 0;
    for(int i = 0; i < boardSize; i++)
    {
        for(int j = 0; j < boardColSize[i]; j++)
        {
            start[idx++] = '0' + board[i][j];
        }
    }
    start[6] = '\0';
    char target[] = "123450";

    if(strcmp(start, target) == 0) return 0;

    int neighbors[6][4] = {
        {1, 3, -1, -1},
        {0, 2, 4, -1},
        {1, 5, -1, -1},
        {0, 4, -1, -1},
        {1, 3, 5, -1},
        {2, 4, -1, -1},
    };
    int neighborCount[6] = {2, 3, 2, 2, 3, 2};

    //#define MAX 5041
    
    char queue[720][7];
    int steps[720];
    int front = 0, back = 0;

    char visited[720][7];
    int visitedCount = 0;

    strcpy(queue[back], start);
    steps[back] = 0;
    back++;
    strcpy(visited[visitedCount++], start);

    while(front < back)
    {
        char* cur = queue[front];
        int step = steps[front];
        front++;

        int zeroPos = -1;
        for(int i = 0; i < 6; i++)
        {
            if(cur[i] == '0') {zeroPos = i; break;}
        }
        for(int k = 0; k < neighborCount[zeroPos]; k++)
        {
            int swapPos = neighbors[zeroPos][k];

            char next[7];
            strcpy(next, cur);

            char tmp = next[zeroPos];
            next[zeroPos] = next[swapPos];
            next[swapPos] = tmp;

            if(strcmp(next, target) == 0) return step + 1;

            int seen = 0;
            for(int v = 0; v < visitedCount; v++)
                if(strcmp(visited[v], next) == 0) {seen = 1; break;}
            if (!seen) {
                strcpy(visited[visitedCount++], next);
                strcpy(queue[back], next);
                steps[back] = step + 1;
                back++;
            }
        }
    }
    return -1;
}