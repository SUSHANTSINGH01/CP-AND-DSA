class Solution {
  public:
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        
        int n=mat.size();
        Node *head=new Node(mat[0][0]);
        Node *vec[n][n];
        
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                vec[i][j]=new Node(mat[i][j]);
            
    
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                Node* temp=vec[i][j];
                if(i==0 && j==0) 
                head=temp;
                if(j+1<n) 
                temp->right=vec[i][j+1];
                if(i+1<n)
                temp->down=vec[i+1][j];
            }
        }
        
        return head;
    }
};
