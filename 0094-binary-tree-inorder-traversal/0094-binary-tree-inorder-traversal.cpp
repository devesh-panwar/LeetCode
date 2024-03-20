/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int>ans;
    void solve(TreeNode *rt){
        if(rt==nullptr){
            return ;
        }
        solve(rt->left);
        ans.push_back(rt->val);
        solve(rt->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
    if(root==nullptr){
        return {};
    }    

    solve(root);
    return ans;
    }
};