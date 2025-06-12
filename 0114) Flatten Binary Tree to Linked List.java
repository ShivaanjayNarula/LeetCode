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
    public void flatten(TreeNode root) {
        if(root != null)
        {
            helper(root);
        }
    }
    public TreeNode head = null;
    public void helper(TreeNode root)
    {
        if(root.right != null)
        {
            helper(root.right);
        }
        if(root.left != null)
        {
            helper(root.left);
        }
        root.left = null;
        root.right = head;
        head = root;
    }
}
