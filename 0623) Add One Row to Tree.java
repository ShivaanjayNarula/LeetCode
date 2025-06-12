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
    public TreeNode addOneRow(TreeNode root, int val, int depth) {
        if(root == null)
        {
            return root;
        }
        if(depth == 1)
        {
            return new TreeNode(val, root, null);
        }
        helper(root, val, depth-1);
        return root;
    }
    public void helper(TreeNode root, int val, int depth)
    {
        if(root == null)
        {
            return;
        }
        if(depth == 1)
        {
            root.left = new TreeNode(val, root.left, null);
            root.right = new TreeNode(val, null, root.right);
        }
        else
        {
            helper(root.left, val, depth-1);
            helper(root.right, val, depth-1);
        }
    }
}
