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
public:long long sum;
    priority_queue<long long>sum_vec;

    void solve(TreeNode *root){
        queue<TreeNode*>q;
        q.push(root);
       // sum_vec.push(root->val);
        while(!q.empty()){
            int n=q.size();
            sum=0;
            while(n--){
                 TreeNode *curr=q.front();
                 q.pop();
                 sum+=curr->val;
                 
                if(curr->left)  
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);

            }
                          
                sum_vec.push(sum); 
           

        }
    }
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(!root){
            return sum;
        }
       
        solve(root);
        if(k>sum_vec.size()){
            return -1;
        }
       
        k--;
                while(k--){
           sum_vec.pop();
       }
      return sum_vec.top();
    }
};