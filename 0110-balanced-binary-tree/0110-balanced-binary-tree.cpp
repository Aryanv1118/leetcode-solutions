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
    bool match = true;
    int dfs(TreeNode* root){
        if(root == nullptr){
            return 0;
        }
        int lst = dfs(root->left);
        int rst = dfs(root->right);
        if(abs(lst-rst)>1){
            match = false;
        }
        return 1+max(lst,rst);
    }
    bool isBalanced(TreeNode* root) {
        dfs(root);
        return match;
    }
};