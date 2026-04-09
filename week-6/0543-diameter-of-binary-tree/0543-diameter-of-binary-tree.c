/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int height(struct TreeNode* node, int* diameter)
{
    if(node == NULL) return 0;
    int left = height(node->left, diameter);
    int right = height(node->right, diameter);
    int path = left + right;
    if(path > *diameter) *diameter = path;
    return (left > right ? left : right) + 1;
}

int diameterOfBinaryTree(struct TreeNode* root) 
{
    int diameter = 0;
    height(root, &diameter);
    return diameter;
}