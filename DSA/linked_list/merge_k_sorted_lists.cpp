// Optimized Solution


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

// Brute Force


class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
       
        ListNode * start = new ListNode(0);
        ListNode * head = start;
        while(lists.size()){
            int in=-1;
            int minn=INT_MAX;
            for(int j=0;j<lists.size();j++){
                if(lists[j]!=NULL && lists[j]->val<=minn){
                    in=j;
                    minn=lists[j]->val;
                }
            }
            if(in!=-1){
                ListNode *temp = lists[in];
                //lists.erase(lists.begin()+in);
                head->next=temp;
                head=head->next;
                if(temp->next){
                    lists[in]=temp->next;
                }else{
                    lists.erase(lists.begin()+in);
                }

            }else if(in==-1)
            break;
        }
        return start->next;
    }
};
