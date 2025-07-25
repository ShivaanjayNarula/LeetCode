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
    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<>();
        int level = 0;
        helper(root, ans, level);
        return ans;
    }
    public void helper(TreeNode root, List<List<Integer>> ans, int level)
    {
        if(root == null)
        {
            return;
        }
        int n = ans.size();
        if(level >= n)
        {
            ans.add(new ArrayList<>());
        }
        ans.get(level).add(root.val);
        helper(root.left, ans, level+1);
        helper(root.right, ans, level+1);
    }
}
