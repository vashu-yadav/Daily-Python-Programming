int* rightSideView(struct TreeNode* root, int* returnSize) {
    if (root == NULL) {
        *returnSize = 0;
        return NULL;
    }

    struct TreeNode** queue = (struct TreeNode**)malloc(sizeof(struct TreeNode*) * 1000);
    int front = 0, rear = 0;

    int* result = (int*)malloc(sizeof(int) * 100);
    *returnSize = 0;

    queue[rear++] = root;

    while (front < rear) {
        int size = rear - front;

        for (int i = 0; i < size; i++) {
            struct TreeNode* node = queue[front++];

            // Take last node of level
            if (i == size - 1) {
                result[(*returnSize)++] = node->val;
            }

            if (node->left) queue[rear++] = node->left;
            if (node->right) queue[rear++] = node->right;
        }
    }

    return result;
}