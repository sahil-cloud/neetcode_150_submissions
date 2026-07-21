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
    TreeNode* findsr(TreeNode* root,TreeNode* subRoot){
        if(root == NULL) return NULL;
        if(root->val == subRoot->val) return root;
        TreeNode* a1=NULL,*a2=NULL;
        if(root->left) a1 = findsr(root->left,subRoot);
        if(root->right) a2 = findsr(root->right,subRoot);
        if(a1!=NULL) return a1;
        if(a2!=NULL) return a2;
        return NULL;
    }
    bool solve(TreeNode* a, TreeNode* b){
        if(a==NULL && b!=NULL) return false;
        if(a!=NULL && b==NULL) return false;
        if(a==NULL && b==NULL) return true;
        if(a->val != b->val) return false;
        return solve(a->left,b->left) && solve(a->right,b->right);
        // return false;
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        TreeNode* sr = findsr(root,subRoot);
        if(sr == NULL) return false;
        cout<<sr->val<<endl;
        return solve(sr,subRoot);
        // return true;
    }
};
