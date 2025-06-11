/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:

    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if(root == nullptr)
        {
            return "null,";
        }
        return to_string(root->val) + "," + serialize(root->left) + serialize(root->right);
    }

    // Decodes your encoded data to tree.

    TreeNode* deserialize(string data) {
        int i = 0;
        return deserialize(data, i);
    }
    TreeNode* deserialize(string data, int &i)
    {
        if(i > data.size())
        {
            return nullptr;
        }
        string check = "";
        while(data[i] != ',')
        {
            check += data[i++];
        }
        i++;
        if(check == "null")
        {
            return nullptr;
        }
        TreeNode *root = new TreeNode(stoi(check));
        root->left = deserialize(data, i);
        root->right = deserialize(data, i);
        return root;
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;
