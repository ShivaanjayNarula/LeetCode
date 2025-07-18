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
    public boolean findTarget(TreeNode root, int k) {
        List<Integer> nums = new ArrayList<>();
        inorder(root, nums);
        int n = nums.size();
        int left = 0;
        int right = n-1;
        while(left < right)
        {
            if(nums.get(left) + nums.get(right) == k)
            {
                return true;
            }
            else if(nums.get(left) + nums.get(right) < k)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return false;
    }
    public void inorder(TreeNode root, List<Integer> nums)
    {
        if(root == null)
        {
            return;
        }
        inorder(root.left, nums);
        nums.add(root.val);
        inorder(root.right, nums);
    }
}
