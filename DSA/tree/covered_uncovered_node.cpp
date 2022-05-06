/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
long Solution::coveredNodes(TreeNode* A) 
{
        vector<vector<int>> v;
		
        if(A==NULL)
        return 0;
		
        queue<TreeNode*> qu;
		
        qu.push(A);
       
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
            v.push_back(arr);
        }

        long long sum=0;
        long long sum1=0;

        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            if(j==0 || j==v[i].size()-1)
            sum+=v[i][j];
            else
            sum1+=v[i][j];
        }
        return abs(sum1-sum);
}
