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
 //RECURSIVELY 
class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
    
     if(root!=NULL){
        ans.push_back(root->val);
        preorderTraversal(root->left);
         preorderTraversal(root->right);
     }
        return ans;
    }
};

// ITERATIVE
class Solution {
public:
    
    vector<int> preorderTraversal(TreeNode* root) {
    vector<int> ans;
    stack<TreeNode*>st;
    if(root!=NULL)st.push(root);
    while(!st.empty()){
        TreeNode * node=st.top();
        ans.push_back(node->val);
        st.pop();
        if(node->right!=NULL)st.push(node->right);
        if(node->left!=NULL)st.push(node->left);
    }
    return ans;
    }
};
