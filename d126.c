/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
//int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int color, int* returnSize, int** returnColumnSizes) {
    
//}
void dfs(int** image, int m, int n, int r, int c, int oldColor, int newColor) {
    // boundary + color check
    if (r < 0 || r >= m || c < 0 || c >= n || image[r][c] != oldColor) {
        return;
    }

    // color the pixel
    image[r][c] = newColor;

    // 4 directions
    dfs(image, m, n, r + 1, c, oldColor, newColor);
    dfs(image, m, n, r - 1, c, oldColor, newColor);
    dfs(image, m, n, r, c + 1, oldColor, newColor);
    dfs(image, m, n, r, c - 1, oldColor, newColor);
}

int** floodFill(int** image, int imageSize, int* imageColSize, int sr, int sc, int color, int* returnSize, int** returnColumnSizes) {
    
    int m = imageSize;
    int n = imageColSize[0];

    int oldColor = image[sr][sc];

    // ⚠️ VERY IMPORTANT EDGE CASE
    if (oldColor == color) {
        *returnSize = m;
        *returnColumnSizes = imageColSize;
        return image;
    }

    dfs(image, m, n, sr, sc, oldColor, color);

    *returnSize = m;
    *returnColumnSizes = imageColSize;

    return image;
}