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
    int recursion(TreeNode*root, int &maxi){
        if(root == nullptr)return 0;

        int lh = recursion(root->left, maxi);
        int rh = recursion(root->right, maxi);
        maxi = max(maxi, lh + rh);
        return 1 + max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(root == nullptr)return 0;
        int maxi = -1e9;
        recursion(root, maxi);
        return maxi;
    }
};
