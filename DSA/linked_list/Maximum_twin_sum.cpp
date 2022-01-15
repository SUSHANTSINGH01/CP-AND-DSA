class Solution {
public:
    int pairSum(ListNode* head) 
    {
        if(!head)
        return 0;
        vector<int>v;
        while(head)
        {
             v.push_back(head->val);
             head=head->next;
             
        }
        int n=v.size();
        int maxx=0;
        for(int i=0;i<n/2;i++)
        maxx=max(maxx,v[i]+v[n-i-1]);
        return maxx;
     }
};
