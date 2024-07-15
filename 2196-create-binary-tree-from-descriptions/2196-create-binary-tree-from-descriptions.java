/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public TreeNode createBinaryTree(int[][] descriptions) {
        
        Map<Integer,TreeNode>mp=new HashMap<>();
        Map<Integer,Boolean>hasparent=new HashMap<>();

        for(int []description: descriptions){

            TreeNode prent,chld;
            if(!mp.containsKey(description[0])){
                prent=new TreeNode(description[0]);
                mp.put(description[0], prent);
                }
            else{
                prent=mp.get(description[0]);
            }

            if(!mp.containsKey(description[1])){
                chld=new TreeNode(description[1]);
                 mp.put(description[1], chld);
                }
            else{
                chld=mp.get(description[1]);
            }

            if(description[2]==1){
                prent.left=chld;
            }
            else prent.right=chld;

            // mp[description[0]]=prent;
            // mp[description[1]]=chld;

            hasparent.put(description[1],true);
        }

      
        TreeNode root=null;
        for( Map.Entry<Integer,TreeNode>temp:mp.entrySet()){
            if(!hasparent.containsKey(temp.getKey())){
                root=temp.getValue();
            }
        }

        return root;
    }
}