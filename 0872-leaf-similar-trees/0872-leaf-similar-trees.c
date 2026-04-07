/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void getLeaves(struct TreeNode* node, int* arr, int* count)
{
    if(node == NULL) return;
    if(node->left == NULL && node->right == NULL)
    {
        arr[*count] = node->val;
        (*count)++;
        return;
    }
    getLeaves(node->left, arr, count);
    getLeaves(node->right, arr, count);
}

bool leafSimilar(struct TreeNode* root1, struct TreeNode* root2) 
{
    int leaves1[200], leaves2[200];
    int count1 = 0; 
    int count2 = 0;
    getLeaves(root1, leaves1, &count1);
    getLeaves(root2, leaves2, &count2);
    if(count1 != count2) return false;
    for(int i = 0; i < count1; i++)
    {
        if(leaves1[i] != leaves2[i]) return false;
    }
    return true;
}