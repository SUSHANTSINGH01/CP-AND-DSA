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
    
        vector<TreeNode *>solve(int n) 
        {
            n--; 
            if(n==0)
            return 
            {
                new TreeNode(0)
            }; 
            
            vector<TreeNode *>tree;
            

            vector<TreeNode *>lChoice;
            vector<TreeNode *>rChoice;
            
            for(int i=1;i<n;i+=2) 
            {
                
                lChoice=solve(i);
                rChoice=solve(n-i);


                for(TreeNode *i:lChoice) 
                {
                    for(TreeNode *j:rChoice)
                    {
                        TreeNode *root=new TreeNode(0);
                        root->left=i;
                        root->right=j;
                        tree.push_back(root);
                    }
                }
            }
            return tree;
	}
    
	vector<TreeNode *> allPossibleFBT(int n) 
    {
		if(n%2==0) 
        return {};
		else if(n == 1) 
        return 
        {
            new TreeNode(0)
        };
		else if(n==3) 
        return 
        {
            new TreeNode(0, new TreeNode(0), new TreeNode(0))
        };
        return solve(n);
	}
};
