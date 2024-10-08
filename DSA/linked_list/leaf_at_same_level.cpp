

// Optimized Solution


class Solution{
  public:
    /*You are required to complete this method*/
    bool check(Node *root)
    {
        //Your code here
        queue<pair<Node*,int>>q;
        q.push({root,0});
        int sameLevel=-1;
        while(!q.empty()){
            int n=q.size();
            while(n--){
                Node *temp = q.front().first;
                int l = q.front().second;
                q.pop();
                
                if(!temp->left && !temp->right){
                    if(sameLevel==-1)
                    sameLevel=l;
                    else if(l!=sameLevel)
                    return 0;
                }
                if(temp->left)
                q.push({temp->left,l+1});
                if(temp->right)
                q.push({temp->right,l+1});
            }
           
        }
        return 1;
    }
};


// Second Solution


#include <bits/stdc++.h>
using namespace std;

// Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;
    
    return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{   
    // Corner Case
    if(str.length() == 0 || str[0] == 'N')
            return NULL;
    
    // Creating vector of strings from input 
    // string after spliting by space
    vector<string> ip;
    
    istringstream iss(str);
    for(string str; iss >> str; )
        ip.push_back(str);
        
    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));
        
    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);
        
    // Starting from the second element
    int i = 1;
    while(!queue.empty() && i < ip.size()) {
            
        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();
            
        // Get the current node's value from the string
        string currVal = ip[i];
            
        // If the left child is not null
        if(currVal != "N") {
                
            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->left);
        }
            
        // For the right child
        i++;
        if(i >= ip.size())
            break;
        currVal = ip[i];
            
        // If the right child is not null
        if(currVal != "N") {
                
            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));
                
            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }
    
    return root;
}


 // } Driver Code Ends
/* The structure of the binary tree is as follows
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/

class Solution{
  public:
    /*You are required to complete this method*/
    void solve(Node *root,int h,int &maxx,bool &f)
    {
       if(root==NULL)
       return;
       
       if(f==0)
       return;
       
       if(root->left==0 && root->right==0)
       {
           if(maxx==-1)
           maxx=h;
           else
           {
               if(h!=maxx)
               f=0;
           }
       }
       solve(root->left,h+1,maxx,f);
       solve(root->right,h+1,maxx,f);
   }
    bool check(Node *root)
    {
        //Your code here
          int maxx=-1;
          bool f=1;
          solve(root,0,maxx,f);
          return f;
    }
};

// { Driver Code Starts.
// Driver program to test size function
int main()
{
    int t;
    cin>> t;
    getchar();
    while (t--)
    {
        string s;
        getline( cin, s );
        Node* head = buildTree( s );
        Solution obj;
        cout << obj.check(head) << endl;
    }
    return 0;
}
