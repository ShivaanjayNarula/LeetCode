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
    public int sumOfLeftLeaves(TreeNode root) {
        int ans = solve(root);
        return ans;
    }
    int solve(TreeNode root)
    {
        int ans = 0;
        if(root == null)
        {
            return 0;
        }
        if(root.left != null && root.left.left == null && root.left.right == null)
        {
            ans += root.left.val;
        }
        ans += solve(root.left);
        ans += solve(root.right);
        return ans;
    }
}
