class Solution {
public:
    vector<int>ans;
    vector<int>ans1;
    int k=0;
    void solve(ListNode *head)
    {
        while(head)
        {
            if(k%2==0)
            ans1.push_back(head->val);
            else
            ans.push_back(head->val);
            head=head->next;
            k++;
        }
       
    }
    ListNode* oddEvenList(ListNode* head) 
    {
        if(head==0 || head->next==0)
        return head;
        solve(head);
        
        ListNode *start=new ListNode(ans1[0]);
        ListNode *st=start;
        for(int i=1;i<ans1.size();i++)
        {
             ListNode *temp=new ListNode(ans1[i]);
             start->next=temp;
             start=start->next;
        }
        for(int i=0;i<ans.size();i++)
        {
             ListNode *temp=new ListNode(ans[i]);
             start->next=temp;
             start=start->next;
        }
        return st;
        
    }
};
