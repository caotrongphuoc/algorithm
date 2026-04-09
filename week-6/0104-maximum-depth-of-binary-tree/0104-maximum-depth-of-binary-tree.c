/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int maxDepth(struct TreeNode* root) 
{
    if(root == NULL) return 0;
    if(root->left == NULL && root->right != NULL) return maxDepth(root->right) + 1;
    if(root->left != NULL && root->right == NULL) return maxDepth(root->left) + 1;
    int left = maxDepth(root->left);
    int right = maxDepth(root->right);
    return (left > right ? left : right) + 1;
}