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
    bool isValidBST(TreeNode* root) {        
        return isValidBST_util(root, LONG_MIN, LONG_MAX);                
    }

    bool isValidBST_util(TreeNode* root, long low, long high)
    {
        if (root == nullptr) {return true;}
        return (low < root->val && root->val < high) && isValidBST_util(root->left, low, root->val) && isValidBST_util(root->right, root->val, high);
    }
};