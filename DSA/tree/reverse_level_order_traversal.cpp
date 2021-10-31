class Solution {
public:
    vector<vector<int>>ans1;
    vector<vector<int>> levelOrderBottom(TreeNode* root) 
    {
      vector<vector<int>> ans;
		
        if(root==NULL)
        return ans;
		
        queue<TreeNode*> qu;
		
        qu.push(root);
       
        while(!qu.empty()) 
        {
            int n=qu.size(); 
            vector<int> arr;
            while(n>0) 
            {
                TreeNode* node = qu.front();
                qu.pop();
                arr.push_back(node->val);
                if(node->left)
                    qu.push(node->left);
                if(node->right)
                    qu.push(node->right);
                n--;
            }
            ans.push_back(arr);
        }
        for(int i=ans.size()-1;i>=0;i--)
        {
            vector<int>arr1;
            for(int j=0;j<ans[i].size();j++)
            arr1.push_back(ans[i][j]);
            ans1.push_back(arr1);
        }
        return ans1;   
    }
};
