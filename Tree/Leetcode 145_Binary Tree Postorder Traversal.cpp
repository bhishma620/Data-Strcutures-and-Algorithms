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

//RECURSIVE
class Solution {
public:
 vector<int>ans;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root!=NULL){
           postorderTraversal(root->left);
           postorderTraversal(root->right);
           ans.push_back(root->val); 
        }
        return ans;
    }
};


//ITERATIVE USING TWO STACK

class Solution {
public:
 
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s1;
        stack<int>s2;
        if(root!=NULL)s1.push(root);
        while(!s1.empty()){
            TreeNode *node=s1.top();
            s1.pop();
            s2.push(node->val);
            if(node->left!=NULL)s1.push(node->left);
            if(node->right!=NULL)s1.push(node->right);

        }
        while(!s2.empty()){
ans.push_back(s2.top());
s2.pop();
        }
        return ans;
    }
};

//ITERATIVE USING ONE STACK

class Solution {
public:
 
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s1;
TreeNode *cur=root;
        while(!s1.empty()||cur){
            if(cur!=NULL){
                s1.push(cur);
                cur=cur->left;
            }
            else{
                TreeNode * node=s1.top()->right;
                if(node==NULL){
                     node=s1.top();
                     s1.pop();
                     ans.push_back(node->val);
                     while(!s1.empty()&&node==s1.top()->right){
                          node=s1.top();
                     s1.pop();
                     ans.push_back(node->val);
                     }
                }
                else{
                    cur=node;
                }
            }
        }
        return ans;
    }
};
