//All elements of a binary Search Tree
class Solution {
public:
     vector <int> v;
    void inorder(TreeNode* root){
        if(!root) return;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
     //   vector <int> v;
        inorder(root1);
        inorder(root2);
        sort(v.begin(),v.end());
        return v;
    }
};