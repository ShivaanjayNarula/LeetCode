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
    public List<Integer> largestValues(TreeNode root) {
        List<Integer> ans = new ArrayList<>();
        int level = 0;
        dfs(root, level, ans);
        return ans;
    }
    public void dfs(TreeNode root, int level, List<Integer> ans)
    {
        if(root == null)
        {
            return;
        }
        if(level == ans.size())
        {
            ans.add(root.val);
        }
        else
        {
            ans.set(level, Math.max(ans.get(level), root.val));
        }
        dfs(root.left, level + 1, ans);
        dfs(root.right, level + 1, ans);
    }
}
