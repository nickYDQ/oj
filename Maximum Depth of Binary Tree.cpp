/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
        int maxDepth(TreeNode* root) {
            
            if(root==NULL)
            {
                return 0;
            }
            int nleft = maxDepth(root->left);
            int nright = maxDepth(root->right);
            return (nleft>nright)?(nleft+1):(nright+1); 
        }
           
            
    
};