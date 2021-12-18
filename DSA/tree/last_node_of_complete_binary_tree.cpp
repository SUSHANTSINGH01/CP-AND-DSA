int Solution::lastNode(TreeNode* A) 
{
    vector<int>res;
   queue<TreeNode*>q;
    

     if(A->left==0 && A->right==0)
     return  A->val;
     q.push(A);
     int prev=A->val;
     while(!q.empty())
     {
         TreeNode *temp=q.front();
         q.pop();
         if(temp->right!=0 && temp->left!=0)
         {
             q.push(temp->left);
             q.push(temp->right);
             prev=temp->right->val;
         }
         else
         {
             if(temp->left==0 && temp->right==0)
             return prev;
             else if(temp->right==0 && temp->left!=0)
             return temp->left->val;
             else if(temp->left==0)
             return prev;
         }

     }
    return prev;
}
