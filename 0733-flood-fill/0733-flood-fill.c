/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
void dfs(int **image, int rows, int cols, int r, int c, int oldColor, int newColor)
{
    if(r < 0 || r >= rows || c < 0 || c >= cols) return;
    if(image[r][c] != oldColor) return;
    image[r][c] = newColor;
    dfs(image, rows, cols, r + 1, c, oldColor, newColor);
    dfs(image, rows, cols, r - 1, c, oldColor, newColor);
    dfs(image, rows, cols, r, c + 1, oldColor, newColor);
    dfs(image, rows, cols, r, c - 1, oldColor, newColor);
}

int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int color, int* returnSize, int** returnColumnSizes) 
{
    int oldColor = image[sr][sc];
    if(oldColor != color)
    {
        dfs(image, imageSize, imageColSize[0], sr, sc, oldColor, color);
    }
    *returnSize = imageSize;
    *returnColumnSizes = (int*)malloc(sizeof(int) * imageSize);
    for(int i = 0; i < imageSize; i++)
    {
        (*returnColumnSizes)[i] = imageColSize[i];
    }
    return image;
}