/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
      
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<lists.size();i++)
        {
            if(lists[i])
            pq.push({lists[i]->val,i});
           // cout<<lists[i]->val<<" "<<i<<endl;
        }
        
        ListNode* ans=new ListNode(-1);
        ListNode* temp=ans;
        
        while(!pq.empty())
        {
            int v=pq.top().first;
            int index=pq.top().second;
            pq.pop();
            temp->next=new ListNode(v);
            lists[index]=lists[index]->next;
            
            if(lists[index])
            pq.push({lists[index]->val,index});
            
            temp=temp->next;
            
        }
        return ans->next;
    }
};
