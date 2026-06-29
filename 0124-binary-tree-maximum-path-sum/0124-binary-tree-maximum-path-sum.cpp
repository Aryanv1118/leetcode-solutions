/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maximum = INT_MIN;
    int dfs(TreeNode* root){
        if(root == nullptr)
            return 0;
        int leftp = dfs(root->left);
        int rightp = dfs(root->right);
        leftp = max(0,leftp);
        rightp = max(0,rightp);
        maximum = max(maximum,leftp+rightp+root->val);
        return root->val + max(leftp,rightp);
    }
    int maxPathSum(TreeNode* root) {
        dfs(root);
        return maximum;
    }
};