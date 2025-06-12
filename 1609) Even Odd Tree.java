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
    public boolean isEvenOddTree(TreeNode root) {
        List<List<Integer>> nums = new ArrayList<>();
        int level = 0;
        helper(root, nums, level);
        for(int i = 0; i < nums.size(); i++)
        {
            List<Integer> check = nums.get(i);
            if(i % 2 == 0)
            {
                for(int j = 0; j < check.size(); j++)
                {
                    if(check.get(j) % 2 == 0)
                    {
                        return false;
                    }
                    if(j > 0 && check.get(j) <= check.get(j - 1))
                    {
                        return false;
                    }
                }
            }
            else
            {
                for(int j = 0; j < check.size(); j++)
                {
                    if(check.get(j) % 2 != 0)
                    {
                        return false;
                    }
                    if(j > 0 && check.get(j) >= check.get(j-1))
                    {
                        return false;
                    }
                }
            }
        }
        return true;
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
