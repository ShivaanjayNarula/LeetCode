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
    public boolean isUnivalTree(TreeNode root) {
        if(root == null)
        {
            return true;
        }
        int k = root.val;
        return helper(root, k);
    }
    public boolean helper(TreeNode root, int k)
    {
        if(root == null)
        {
            return true;
        }
        if(root.val != k)
        {
            return false;
        }
        return helper(root.left, k) && helper(root.right, k);
    }
}
