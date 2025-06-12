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
    public TreeNode deleteNode(TreeNode root, int key) {
        if(root == null)
        {
            return root;
        }
        if(root.val < key)
        {
            root.right = deleteNode(root.right, key);
        }
        else if(root.val > key)
        {
            root.left = deleteNode(root.left, key);
        }
        else
        {
            if(root.left == null)
            {
                TreeNode temp = root.right;
                root = null;
                return temp;
            }
            else if(root.right == null)
            {
                TreeNode temp = root.left;
                root = null;
                return temp;
            }
            else
            {
                TreeNode temp = root.left;
                while(temp.right != null)
                {
                    temp = temp.right;
                }
                root.val = temp.val;
                root.left = deleteNode(root.left, root.val);
            }
        }
        return root;
    }
}
