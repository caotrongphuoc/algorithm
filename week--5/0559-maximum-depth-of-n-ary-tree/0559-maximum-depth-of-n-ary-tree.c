/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     int numChildren;
 *     struct Node** children;
 * };
 */

int maxDepth(struct Node* root) 
{
    if(root == NULL) return 0;
    int max = 0;
    for(int i = 0; i < root->numChildren; i++)
    {
        int depth = maxDepth(root->children[i]);
        if(depth > max)
        {
            max = depth;
        }
    }
    return max + 1;
}