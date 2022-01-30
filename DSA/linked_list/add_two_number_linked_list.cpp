ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) 
{
         if(A==0 || B==0) 
         return A==0?B:A;        
         int c=0;
        
         ListNode* res=new ListNode(0); 
         ListNode* tmp=res;
         ListNode* temp=res;
        while(A!=0 || B!=0) 
        {
            int sum = c;
            if(A != 0) 
            {
                sum+=A->val;
                A = A->next;
            }
            if(B != 0) 
            {
                sum+=B->val;
                B = B->next;
            }
            tmp->val = sum%10;
            c = sum/10;
            temp = tmp;
            tmp->next = new ListNode(0);
            tmp = tmp->next;
        }
        if(c != 0) 
        temp->next = new ListNode(c);
        else 
        {
            temp->next = 0;
            delete(tmp);
        }
        return res;
}
