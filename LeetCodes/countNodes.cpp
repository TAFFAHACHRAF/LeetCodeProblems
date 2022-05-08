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
    int countNodes(TreeNode* root) {
        if(root==0)
            return 0;
         else{
             return countNodes(root->left)+1+countNodes(root->right);
         }
    }
};

//Runtime: 44 ms, faster than 50.77% of C++ online submissions for Count Complete Tree Nodes.
//Memory Usage: 30.9 MB, less than 64.88% of C++ online submissions for Count Complete Tree Nodes.
