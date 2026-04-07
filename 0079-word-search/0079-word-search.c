bool dfs(char** board, int m, int n, char* word, int i, int j, int k)
{
    if(word[k] == '\0') return true;
    if(i < 0 || i >= m || j < 0 || j >= n || board[i][j] != word[k]) return false;

    char tmp = board[i][j];
    board[i][j] = '#';

    bool found = dfs(board, m, n, word, i + 1, j, k + 1) ||
                 dfs(board, m, n, word, i - 1, j, k + 1) ||
                 dfs(board, m, n, word, i, j + 1, k + 1) ||
                 dfs(board, m, n, word, i, j - 1, k + 1);
    board[i][j] = tmp;
    return found;
}

bool exist(char** board, int boardSize, int* boardColSize, char* word) 
{
    int m = boardSize;
    int n = boardColSize[0];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(dfs(board, m, n, word, i, j, 0)) return true;
        }
    }
    return false;
}
