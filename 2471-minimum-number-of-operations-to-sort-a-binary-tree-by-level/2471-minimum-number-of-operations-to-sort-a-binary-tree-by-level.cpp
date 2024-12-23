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
    int minimumOperations(TreeNode* root) {
    if (root == nullptr) return 0;

    queue<TreeNode*> q;
    q.push(root);
    int ans = 0;

    while (!q.empty()) {
        int n = q.size();
        vector<int> vt;

       
        for (int i = 0; i < n; i++) {
            TreeNode* node = q.front();
            q.pop();

            
            if (node->left) {
                q.push(node->left);
                vt.push_back(node->left->val);
            }
            if (node->right) {
                q.push(node->right);
                vt.push_back(node->right->val);
            }
        }

       
        vector<int> sorted_vt = vt;
        sort(sorted_vt.begin(), sorted_vt.end());

      
        unordered_map<int, int> index_map;
        for (int i = 0; i < sorted_vt.size(); i++) {
            index_map[sorted_vt[i]] = i;
        }

       
        vector<bool> visited(vt.size(), false);
        for (int i = 0; i < vt.size(); i++) {
            if (visited[i] || index_map[vt[i]] == i) {
                continue;  
            }

            int cycle_size = 0;
            int x = i;

           
            while (!visited[x]) {
                visited[x] = true;
                x = index_map[vt[x]];
                cycle_size++;
            }

            if (cycle_size > 1) {
                ans += cycle_size - 1; 
            }
        }
    }

    return ans;
}

};