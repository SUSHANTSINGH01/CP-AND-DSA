class Solution {
  public:
    bool isHeap(struct Node* tree) {
        // code here
         queue<struct Node*>q;
        bool f=1;
        q.push(tree);
        while(q.empty()==false)
        {
            int n=q.size();
            while(n--)
            {
                struct Node *temp=q.front();
                int v=temp->data;
                q.pop();
                if(temp->left)
                {
                    if(temp->left->data<v)
                    q.push(temp->left);
                    else 
                    return 0;
                }
                if(temp->right) 
                {
                    if(temp->right->data<v)
                    q.push(temp->right);
                    else
                    return 0;
                }
                if((!temp->left || !temp->right) && (!q.empty()
                && (q.front()->left or q.front()->right)))
                return 0;
            }
        }
        return f;
    }
};
