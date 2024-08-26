/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int>ans;

    void solve(Node* root){

        while(root->children.size()>0){
            solve(root->children[0]);
           root->children.erase(root->children.begin());
        }
        ans.push_back(root->val);

    }
    vector<int> postorder(Node* root) {
        
        if(!root) return ans;
        solve(root);

        return ans;
    }
};