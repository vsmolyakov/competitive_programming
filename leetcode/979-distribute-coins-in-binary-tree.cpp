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
    int distributeCoins(TreeNode* root) 
    {        
        ans = 0;
        dfs(root);
        return ans;        
    }
    
    int dfs(TreeNode* root)
    {
        if (root == nullptr) {return 0;}
        //dfs(node) returns an excess of 
        //the number of coins at or below node
        int L = dfs(root->left);
        int R = dfs(root->right);
        ans += abs(L) + abs(R);
        return root->val + L + R - 1;
    }
    
private:
    int ans;  //number of moves
};