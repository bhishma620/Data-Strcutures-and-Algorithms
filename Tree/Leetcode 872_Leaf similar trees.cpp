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
int dfs(stack<TreeNode*>&s){
    TreeNode* node;
    while(true){
node=s.top();
s.pop();
if(node->right)s.push(node->right);
if(node->left)s.push(node->left);
if(!node->right && !node->left)return node->val;
    }
}
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
       stack<TreeNode*>S1;
       stack<TreeNode*>S2;
        S1.push(root1);
        S2.push(root2);
        while(!S1.empty() && !S2.empty()){
if(dfs(S1)!=dfs(S2))return false;
        }
     
return S1.empty()&&S2.empty();
      

    }

};
