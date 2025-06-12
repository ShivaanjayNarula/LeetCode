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
    public int getMinimumDifference(TreeNode root) {
        if(root == null)
        {
            return 0;
        }
        List<Integer> nums = new ArrayList<>();
        dfs(root, nums);
        nums.sort(null);
        int ans = Integer.MAX_VALUE;
        int n = nums.size();
        for(int i = 0; i < n-1; i++)
        {
            ans = Math.min(ans, nums.get(i+1) - nums.get(i));
        }
        return ans;
    }
    public void dfs(TreeNode root, List<Integer> nums)
    {
        if(root == null)
        {
            return;
        }
        dfs(root.left, nums);
        nums.add(root.val);
        dfs(root.right, nums);
    }
}
