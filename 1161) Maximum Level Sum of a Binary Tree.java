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
    public int maxLevelSum(TreeNode root) {
        List<List<Integer>> nums = new ArrayList<>();
        int level = 0;
        helper(root, nums, level);
        int maxLevel = 0;
        int maxSum = Integer.MIN_VALUE;
        int m = nums.size();
        for(int i = 0; i < m; i++)
        {
            List<Integer> check = nums.get(i);
            int n = check.size();
            int sum = 0;
            for(int j = 0; j < n; j++)
            {
                sum += check.get(j);
            }
            if(sum > maxSum)
            {
                maxLevel = i+1;
                maxSum = sum;
            }
        }
        return maxLevel;
    }
    public void helper(TreeNode root, List<List<Integer>> nums, int level)
    {
        if(root == null)
        {
            return;
        }
        int n = nums.size();
        if(level >= n)
        {
            nums.add(new ArrayList<>());
        }
        nums.get(level).add(root.val);
        helper(root.left, nums, level+1);
        helper(root.right, nums, level+1);
    }
}
