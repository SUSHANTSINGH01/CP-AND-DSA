class Solution {
  public:
    void convert(Node *head, TreeNode *&root) {
    
        TreeNode *root1 = new TreeNode(head->data);
        root=root1;
        queue<TreeNode*>q;
        q.push(root);
        head=head->next;
        while(head){
            int n=q.size();
           // q.pop();
            while(n-- && head){
                root1=q.front();
                q.pop();
                if(head){
                    root1->left=new TreeNode(head->data);
                    head=head->next;
                    q.push(root1->left);
                }
                if(head){
                    root1->right=new TreeNode(head->data);
                    head=head->next;
                    q.push(root1->right);
                }
            }
        }
       
    }
};
