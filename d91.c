int** levelOrder(struct TreeNode* root, int* returnSize, int** returnColumnSizes) {
    
    if (root == NULL) {
        *returnSize = 0;
        *returnColumnSizes = NULL;
        return NULL;
    }

    // Allocate result arrays
    int** result = (int**)malloc(2000 * sizeof(int*));
    *returnColumnSizes = (int*)malloc(2000 * sizeof(int));

    // Queue for BFS
    struct TreeNode* queue[2000];
    int front = 0, rear = 0;

    queue[rear++] = root;

    int level = 0;

    while (front < rear) {
        int size = rear - front;

        // Allocate space for this level
        result[level] = (int*)malloc(size * sizeof(int));
        (*returnColumnSizes)[level] = size;

        for (int i = 0; i < size; i++) {
            struct TreeNode* curr = queue[front++];

            result[level][i] = curr->val;

            if (curr->left)
                queue[rear++] = curr->left;

            if (curr->right)
                queue[rear++] = curr->right;
        }

        level++;
    }

    *returnSize = level;
    return result;
}