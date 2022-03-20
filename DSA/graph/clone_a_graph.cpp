UndirectedGraphNode *Solution::cloneGraph(UndirectedGraphNode *node)
{
    unordered_map<UndirectedGraphNode*,UndirectedGraphNode*>mp;
    queue<UndirectedGraphNode*>qu;
    UndirectedGraphNode *start=new UndirectedGraphNode(node->label);
    qu.push(node);
    mp[node]=start;
    while(!qu.empty())
    {
       UndirectedGraphNode* from=qu.front();
       qu.pop();
       vector<UndirectedGraphNode *>vec=from->neighbors;
       for(int i=0;i<vec.size();i++)
       {
            if(mp.find(vec[i])==mp.end())
            {
               UndirectedGraphNode *temp=new UndirectedGraphNode(vec[i]->label);
               mp[vec[i]]=temp;
               qu.push(vec[i]);
           }
           mp[from]->neighbors.push_back(mp[vec[i]]);
       }
   }
   return mp[node];
   }


//

/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:
    Node* cloneGraph(Node* node) 
    {
         unordered_map<int, Node*>mp; 
         queue<Node*>q;
         vector<bool>vis(105,false);
         
         if(node==0)
         return node;
        
         Node* start=new Node(node->val);
         q.push(node);
         mp[node->val]=start;
         vis[node->val]=true;        
         while(!q.empty())
         {
            Node* cur=q.front();
            Node* begin=mp[cur->val];
            
            for(auto it : cur->neighbors)
            {
                if(vis[it->val]==false)
                {
                    vis[it->val]=true;
                    q.push(it);
                }
               
                if(mp.find(it->val)==mp.end())
                mp[it->val]=new Node(it->val);
                
                begin->neighbors.push_back(mp[it->val]);
            }
            q.pop();
        }
        return start;    
    }
};
