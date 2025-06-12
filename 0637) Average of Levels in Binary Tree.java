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
    public List<Double> averageOfLevels(TreeNode root) {
        List<Double> sum = new ArrayList<>();
        List<Double> count = new ArrayList<>();
        List<Double> ans = new ArrayList<>();
        helper(root, 0, sum, count);
        int n = sum.size();
        for(int i = 0; i < n; i++)
        {
            Double avg = sum.get(i) / count.get(i);
            ans.add(avg);
        }
        return ans;
    }
    void helper(TreeNode root, int level, List<Double> sum, List<Double> count)
    {
        if(root == null)
        {
            return;
        }
        if(level >= sum.size())
        {
            sum.add(0.0);
            count.add(0.0);
        }
        sum.set(level, sum.get(level) + root.val);
        count.set(level, count.get(level) + 1);
        helper(root.left, level+1, sum, count);
        helper(root.right, level+1, sum, count);
    }
}
