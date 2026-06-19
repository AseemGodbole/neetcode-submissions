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
    void preorder(TreeNode* node, vector<int> &arr){
        if(node==nullptr) {
            arr.push_back(INT_MAX);
            return;
        } 
        arr.push_back(node->val);
        preorder(node->left,arr);
        preorder(node->right,arr);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> p1; 
        vector<int> p2;
        preorder(p,p1);
        preorder(q,p2);
        if(p1.size()!=p2.size()) return false;
        for(int i =0; i<p1.size(); i++){
            if(p1[i]!=p2[i]) return false;
        }
        return true;

    }
};
