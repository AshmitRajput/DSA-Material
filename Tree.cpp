#include<iostream>
#include <vector>
using namespace std;

 //Definition for a binary tree node.
struct TreeNode{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
void preorder(TreeNode* root){
    if(root==nullptr) return;
    cout<<root->val<<" ";
    preorder(root->left);
    preorder(root->right);
}
vector<int> ans;
/*void inorder(TreeNode* root){
        if(root==nullptr) return;
        inorder(root->left);
        ans.push_back(root->val);
        inorder(root->right);
}*/

/*
void postorder(TreeNode* root){
        if(root==nullptr) return;
        postorder(root->left);
        postorder(root->right);
        ans.push_back(root->val);
}
*/

vector<int> preorderTraversal(TreeNode* root) {
        
    }
int main() {
    
    return 0;
}