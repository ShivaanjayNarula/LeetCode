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
    public boolean isBalanced(TreeNode root) {
        if(root == null)
        {
            return true;
        }
        int left = helper(root.left);
        int right = helper(root.right);
        if(Math.abs(left - right) <= 1 && isBalanced(root.left) && isBalanced(root.right))
        {
            return true;
        }
        return false;
    }
    public int helper(TreeNode root)
    {
        if(root == null)
        {
            return 0;
        }
        return Math.max(helper(root.left), helper(root.right)) + 1;
    }
}
