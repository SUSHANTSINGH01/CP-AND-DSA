vector<int> leftView(Node *root)
{
   // Your code here
   
        vector<int>res;
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
             
            int n=q.size();
            bool flag=false;
             
            while(n--)
            {
                Node *temp=q.front();
                q.pop();
                
                if(!flag)
                res.push_back(temp->data);
                 
                if(temp->left)
                q.push(temp->left);
                if(temp->right)
                q.push(temp->right);
                 
                flag=true;
            }
           
        }
        return res;
}
