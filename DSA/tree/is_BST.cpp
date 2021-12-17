// 1st Approach

class Solution {
public:
    
    bool isBST(TreeNode *root,long long int min,long long int max)
    {
        if(root==NULL)
        return 1;
        
        return (root->val>min && root->val<max && isBST(root->left,min,root->val) && isBST(root->right,root->val,max));
    }
    bool isValidBST(TreeNode* root) 
    {
        return isBST(root,-1e18,1e18);
        
    }
};

// second Approach

class Solution {
public:
    bool isValidBST(TreeNode* root)
    {
        if(root==NULL)
        return 1; 
        stack<TreeNode*>st;
        vector<int>arr;
        while(1)
        {
            if(root!=NULL)
            {
                st.push(root);
                root=root->left;
            }
            else
            {
                if(st.empty())
                break;
                
                root=st.top();
                st.pop();
                arr.push_back(root->val);
                root=root->right;
            }
        }
        int l=arr.size()-1;
        for(int i=0;i<l;i++)
        {
            if(arr[i]>=arr[i+1])
            return 0;
        }
        
        return 1;
    }
};
