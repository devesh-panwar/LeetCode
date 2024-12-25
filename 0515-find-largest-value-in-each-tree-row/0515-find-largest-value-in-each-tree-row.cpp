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
    vector<int> largestValues(TreeNode* root) {
        
        queue<TreeNode*>q;
        vector<int>ans;
        if(!root) return ans;
        q.push(root);

        while(!q.empty()){

            int n=q.size();
            vector<int>temp;
            while(n--){
                TreeNode *t=q.front();
                q.pop();
                temp.push_back(t->val);
                if((t->left)) q.push(t->left);

                if((t->right)) q.push(t->right);

            }
            int tt=*max_element(temp.begin(),temp.end());
            ans.push_back(tt);

        }

        return ans;
    }
};