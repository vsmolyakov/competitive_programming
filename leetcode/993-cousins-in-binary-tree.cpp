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
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        node_depth(root, x, 0, root->val); 
        node_depth(root, y, 0, root->val);
        int xd = depth[0].first; int xp = depth[0].second;
        int yd = depth[1].first; int yp = depth[1].second;    
        if (xd != yd) {return false;}
        if (xp != yp) {return true;}
    
        return false;
    }
    
    void node_depth(TreeNode* root, int key, int d, int p)
    {
        if (root == nullptr) {return;}
        
        //pre-order traversal
        if (root->val == key) 
        {
            depth.push_back(make_pair(d,p));
            return;
        }
        node_depth(root->left,  key, d + 1, root->val);
        node_depth(root->right, key, d + 1, root->val);
    }

private:
    vector<pair<int, int>> depth;
};