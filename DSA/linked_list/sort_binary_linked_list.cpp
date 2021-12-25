ListNode* Solution::solve(ListNode* A) 
{
 
         ListNode * temp=A;

        int z=0;
        int o=0;
        
        while(temp!=NULL)
        {
            if(temp->val == 0)
            z++;
            else
            o++;

            temp=temp->next;
        }

        int n = o+z;
        ListNode *start=A;
        
        for(int i=1;i<=n;i++)
        {
            if(i<=z)
            start->val = 0;
            else
            start->val =1;

            start=start->next;
        }

        return A;
}
