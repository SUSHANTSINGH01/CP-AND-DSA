#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
	public:
    	 struct Node 
    	 {
               int data;
               struct Node* left;
               struct Node* right;
               Node(int val)
               {
                   data=val;
                   left=0;
                   right=0;
               }
        };
       
       struct cmp 
       {
           bool operator()(Node* l, Node* r)
           {
               return (l->data > r->data);
           }
       };
        
        void pre_order(Node *root,string s,vector<string>&ans)
        {
            if(!root)
            return;
            
            
            if(!root->left && !root->right)
            ans.push_back(s);
            
            pre_order(root->left,s+"0",ans);
            pre_order(root->right,s+"1",ans);
        }
    
	
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		     priority_queue<Node*,vector<Node*>,cmp> pq;

         for(int i=0;i<N;i++)
         {
             Node *temp=new Node(f[i]);
             pq.push(temp);
         }
         
         while(pq.size() != 1)
         {
             Node *left=pq.top();
             pq.pop();
             Node *right=pq.top();
             pq.pop();
             Node *parent=new Node(left->data + right->data);
             parent->left=left;
             parent->right=right;
             pq.push(parent);
         }
         
         Node *root=pq.top();
         pq.pop();
         vector<string>ans;
        
         pre_order(root,"",ans);
         return ans;
     
		}
};

// { Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
	    string S;
	    cin >> S;
	    int N = S.length();
	    vector<int> f(N);
	    for(int i=0;i<N;i++){
	        cin>>f[i];
	    }
	    Solution ob;
	    vector<string> ans = ob.huffmanCodes(S,f,N);
	    for(auto i: ans)
	    	cout << i << " ";
	    cout << "\n";
    }
	return 0;
} 
