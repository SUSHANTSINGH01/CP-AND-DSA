class Solution {
public:
    Node* cloneGraph(Node* node) 
    {
         if(node == nullptr)
         return node;
        queue<Node*> q;
        unordered_map<int, Node*> clone;
        unordered_set<Node*> visited;
        
        q.push(node);
        Node* start= new Node(node->val);
        clone[node->val]=start;
        visited.insert(node);
        
        while(!q.empty())
        {
            Node* cur = q.front();
            Node* curr_start = clone[cur->val];
            
            for(Node* it: cur->neighbors)
            {
                if(visited.find(it) == visited.end())
                {
                    visited.insert(it);
                    q.push(it);
                }
               
                if(clone.find(it->val) == clone.end())
                clone[it->val]= new Node(it->val);
                
                curr_start->neighbors.push_back(clone[it->val]);
            }
            q.pop();
        }
        return start;
    }
};
