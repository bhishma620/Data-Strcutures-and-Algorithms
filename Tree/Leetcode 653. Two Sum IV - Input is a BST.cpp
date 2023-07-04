/* Given the root of a binary search tree and an integer k, 
return true if there exist two elements in the BST such that their sum is equal to k, or false otherwise.

Example 1:
Input: root = [5,3,6,2,4,null,7], k = 9
Output: true

Example 2:
Input: root = [5,3,6,2,4,null,7], k = 28
Output: false
 

Constraints:

The number of nodes in the tree is in the range [1, 104].
-104 <= Node.val <= 104
root is guaranteed to be a valid binary search tree.
-105 <= k <= 105

  */

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

 class BSTiterator{
private:
stack<TreeNode*>s1,s2;
public:
BSTiterator(TreeNode* root, int flag){
    if(flag==1){
       while(root){
           s1.push(root);
           root=root->left;
       }
    }
    else{
         while(root){
           s2.push(root);
           root=root->right;
       }
    }
}

int next(){
TreeNode* y=s1.top();
s1.pop();
TreeNode* x=y->right;
if(x){

while(x){
    s1.push(x);
    x=x->left;
}

}
return y->val;
}

int prev(){
TreeNode* y=s2.top();
s2.pop();
TreeNode*x=y->left;
if(x){

while(x){
    s2.push(x);
    x=x->right;
}

}
return y->val;
}

bool hasnext(){
    return !s1.empty();
}
bool hasprev(){
    return !s2.empty();
}

 };

class Solution {
public:
    bool findTarget(TreeNode* root, int k) {
if(!root->left&&!root->right)return false;

        BSTiterator l(root,1);
        BSTiterator r(root,0);

      int f=l.next();
      int s=r.prev();
    
while(f<s){
    if(f+s==k)return true;
    else if(f+s<k){
        if(l.hasnext())
        f=l.next();
        else break;
    }
    else{
        if(r.hasprev())
        s=r.prev();
        else break;
    }
}

return false;
    }
    }
};
