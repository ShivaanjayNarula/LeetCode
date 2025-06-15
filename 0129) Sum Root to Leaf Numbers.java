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
    public int sumNumbers(TreeNode root) {
        int ans = 0;
        return helper(root, ans);
    }
    public int helper(TreeNode root, int ans)
    {
        if(root == null)
        {
            return 0;
        }
        ans = ans * 10 + root.val;
        if(root.left == null && root.right == null)
        {
            return ans;
        }
        int left = helper(root.left, ans);
        int right = helper(root.right, ans);
        return left + right;
    }
}
