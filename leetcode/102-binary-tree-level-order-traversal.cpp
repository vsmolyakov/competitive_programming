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
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>> result;
        if (root == nullptr) {return result;}

        //BFS
        queue<TreeNode*> q;
        q.push(root);
        q.push(nullptr); //flag indicated the end of a level
        result.push_back(vector<int>());
        while (!q.empty())
        {
            TreeNode* item = q.front(); q.pop();

            if (item == nullptr) //a level is finished
            {
                if (q.empty()) {break;} //no more levels
                q.push(nullptr); //for the next level
                result.push_back(vector<int>()); //for the next level
            }
            else
            {
                result.back().push_back(item->val);
                if (item->left) {q.push(item->left);}
                if (item->right) {q.push(item->right);}
            }
        }
        return result;
    }
};