// https://leetcode.com/problems/search-in-a-binary-search-tree/
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

// method: 1 recursion
class Solution {
public:
  TreeNode* searchBST(TreeNode* root, int val) {
    if(root == NULL) 
      return NULL;
        
    if(root->val==val)
      return root;
        
    return root->val > val ? searchBST(root->left, val) : searchBST(root->right, val);
  }
};

// method: 2 iterative
class Solution {
public:
  TreeNode* searchBST(TreeNode* root, int val) {
    if(root==NULL){
      return NULL;
    }
    
    while(root){
      if(root->val==val){
        return root;
      } else if(root->val>val){
        root=root->left;
      } else root= root->right;
    }
    
    return root;
  }
};
