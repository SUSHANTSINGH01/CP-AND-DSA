class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
         vector<vector<int>> v;
		
        if(root==NULL)
        return v;
		
        queue<TreeNode*> qu;
		
        qu.push(root);
        int h=0;
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
            if(h%2==0)
            v.push_back(arr);
            else
            {
                reverse(arr.begin(),arr.end());
                v.push_back(arr);
            }
            h++;
        }
        return v;
    }
};
