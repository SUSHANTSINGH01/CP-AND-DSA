/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 void solve(TreeNode *A,vector<int>&vec)
 {
     if(A==0)
     return ;

     vec.push_back(A->val);

     solve(A->left,vec);
     solve(A->right,vec);

     return;
 }
int Solution::t2Sum(TreeNode* A, int B) 
{
    vector<int>vec;

    solve(A,vec);

    sort(vec.begin(),vec.end());

   
    int n=vec.size();
     //cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
       int temp=vec[i];
   // cout<<vec[i]<<endl;
       int temp1=B-temp;
       //cout<<temp1<<endl;
       int l=0;
       int r=n-1;
       while(l<=r)
       {
            int mid=(r+l)/2;
            
            if(mid==i)
            break;
            if(vec[mid]==temp1)
            return 1;

            else if(vec[mid]<temp1)
            l=mid+1;

            else
            r=mid-1;
       }
    }
       return 0;
}
