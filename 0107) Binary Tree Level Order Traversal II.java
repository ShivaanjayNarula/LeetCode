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
    public List<List<Integer>> levelOrderBottom(TreeNode root) {
        List<List<Integer>> ans = new ArrayList<>();
        int level = 0;
        helper(root, level, ans);
        Collections.reverse(ans);
        return ans;
    }
    public void helper(TreeNode root, int level, List<List<Integer>> ans)
    {
        if(root == null)
        {
            return;
        }
        if(ans.size() == level)
        {
            ans.add(new ArrayList<>());
        }
        ans.get(level).add(root.val);
        helper(root.left, level+1, ans);
        helper(root.right, level+1, ans);
    }
}
