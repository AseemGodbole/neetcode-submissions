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
    int ans(TreeNode* root, int cnt, int maxi){
        if(root==nullptr) return 0;
        if(root->val >= maxi) {
            cnt++;
            maxi = root->val;
        }
        int current = root->val>=maxi?1:0;
        return current + ans(root->left,cnt,maxi) + ans(root->right,cnt,maxi);
    }
    int goodNodes(TreeNode* root) {
        int cnt = 0;
        if(root==nullptr) return cnt;
        int maxi = root->val;
        return ans(root,cnt,maxi);
    }
};
