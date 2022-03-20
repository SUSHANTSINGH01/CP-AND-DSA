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
