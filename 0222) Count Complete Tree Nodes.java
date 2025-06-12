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
    private int ans = 0;
    public int countNodes(TreeNode root) {
        helper(root);
        return ans;
    }
    public void helper(TreeNode root)
    {
        if(root == null)
        {
            return;
        }
        if(root.left != null && root.right != null)
        {
            ans++;
        }
        if(root.left == null || root.right == null)
        {
            ans++;
        }
        helper(root.left);
        helper(root.right);
    }
}
