vector<int> rightSideView(TreeNode* root) {
        if(root == NULL)
            return {};
        vector<int> ans;
        
        queue<TreeNode*> q;
        
        q.push(root);
        int i=0;
        while(!q.empty()){
            int q_size=q.size();
            for(i=1;i<=q_size;i++){
            TreeNode* curr=q.front();
            q.pop();
            if(i == q_size){
                ans.push_back(curr->val);
            }
            if(curr->left)q.push(curr->left);
            if(curr->right)q.push(curr->right);
            }
            
        }
        return ans;
        
    }
//leetcode problem https://leetcode.com/problems/binary-tree-right-side-view/
