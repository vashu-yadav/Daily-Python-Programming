void helper(struct TreeNode* root, struct TreeNode** prev) {
    if (root == NULL) return;

    // Reverse preorder: Right → Left → Root
    helper(root->right, prev);
    helper(root->left, prev);

    root->right = *prev;
    root->left = NULL;

    *prev = root;
}

