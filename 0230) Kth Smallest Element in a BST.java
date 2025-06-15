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
    public int kthSmallest(TreeNode root, int k) {
        List<Integer> nums = new ArrayList<Integer>();
        helper(root, nums);
        Collections.sort(nums);
        return nums.get(k-1);
    }
    public void helper(TreeNode root, List<Integer> nums)
    {
        if(root == null)
        {
            return;
        }
        nums.add(root.val);
        helper(root.left, nums);
        helper(root.right, nums);
    }
}
