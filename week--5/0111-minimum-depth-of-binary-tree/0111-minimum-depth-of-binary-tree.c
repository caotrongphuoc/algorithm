/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
int minDepth(struct TreeNode* root) 
{
    //Neu cay rong 
    if(root == NULL) return 0;
    //Neu nhanh ben trai rong va nhanh ben phai ko rong thi do tiem nhanh ben phai
    if(root->left == NULL && root->right != NULL)
    {
        return minDepth(root->right) + 1;
    }
    //Neu nhanh ben trai ko ron va nhanh ben phai rong thi do tiep nhanh ben phai
    if(root->left != NULL && root->right == NULL)
    {
        return minDepth(root->left) + 1;
    }
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    return (left < right ? left : right) + 1;

}