/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public 
        List<Integer>ans=new ArrayList<>();

        void solve(Node root) {
        while (root.children.size() > 0) {
            solve(root.children.get(0));  
            root.children.remove(0);      
        }
        ans.add(root.val); 
        }
    List<Integer> postorder(Node root) {
        
        if((root==null)) return ans;
        solve(root);

        return ans;
    }
}