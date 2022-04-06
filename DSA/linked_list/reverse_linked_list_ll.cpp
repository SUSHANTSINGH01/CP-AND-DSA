/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) 
{
    vector<int>vec1;
    vector<int>vec2;

    int cnt=1;

    while(A)
    {
        if(cnt>=B && cnt<=C)
        vec2.push_back(A->val);
        else
        vec1.push_back(A->val);

        A=A->next;
        cnt++;
    }

    ListNode *temp=new ListNode(0);
    ListNode *start=temp;
    int n=vec1.size()+vec2.size();
    int l=0;
    int r=vec2.size()-1;
    for(int i=1;i<=n;i++)
    {
        ListNode *add1;
        if(i>=B && i<=C)
        add1=new ListNode(vec2[r--]);
        else
        add1=new ListNode(vec1[l++]);
        
        temp->next=add1;
        temp=temp->next;
    }


    return start->next;
}
