class Solution {
    bool cheak(TreeNode* leftk,TreeNode* rightk){
        if(leftk == NULL && rightk == NULL)
            return true;
        if((leftk!=NULL && rightk == NULL)||(leftk==NULL && rightk != NULL))return false;
        if((leftk !=NULL)&&(rightk!=NULL)){
            return (leftk->val == rightk->val)&&cheak(leftk->left,rightk->right)&&cheak(leftk->right,rightk->left);
        }
        
        return false;
    }
public:
    bool isSymmetric(TreeNode* root) {
        return (root == NULL)&&cheak(root->left,root->right);
    }
};
