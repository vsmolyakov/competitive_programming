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
    string smallestFromLeaf(TreeNode* root) 
    {
        answer = "~";
        vector<char> A;
        dfs(root, A);
        return answer;
    }
    
    void dfs(TreeNode* root, vector<char>& A)
    {
        if (root == nullptr) {return;}        
        A.push_back((char) 'a' + root->val);
        
        if (root->left == nullptr && root->right == nullptr)
        {
            reverse(A.begin(), A.end());
            string str(A.begin(), A.end());
            reverse(A.begin(), A.end());
            
            if (str < answer){answer = str;}
        }
        dfs(root->left, A);
        dfs(root->right, A);
        A.pop_back();        
    }
    
private:
    string answer;
};