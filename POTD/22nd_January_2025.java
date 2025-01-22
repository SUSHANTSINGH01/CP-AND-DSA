class Solution {
    static Node addTwoLists(Node num1, Node num2) {
        // code here
        
       Node prev=null;
       Node curr=num1;
       Node nextN=num1;
       
       while(nextN!=null){
           nextN=curr.next;
           curr.next=prev;
           prev=curr;
           curr=nextN;
       }
       
       Node prev1=null;
       Node curr1=num2;
       Node nextN1=num2;
       
       while(nextN1!=null){
           nextN1=curr1.next;
           curr1.next=prev1;
           prev1=curr1;
           curr1=nextN1;
       }
     
        Node res=new Node(0);
        Node result = res;
        int rem=0;
        
        while(prev!=null & prev1!=null){
            res.next=new Node((prev.data+prev1.data+rem)%10);
            rem=(prev.data+prev1.data+rem)/10;
            res=res.next;
            prev=prev.next;
            prev1=prev1.next;
        }
        
        while(prev!=null){
            res.next=new Node((prev.data+rem)%10);
            rem=(prev.data+rem)/10;
            res=res.next;
            prev=prev.next;
        }
        
        while(prev1!=null){
            res.next=new Node((prev1.data+rem)%10);
            rem=(prev1.data+rem)/10;
            res=res.next;
            prev1=prev1.next;
        }
        
        if(rem>=1){
            res.next=new Node(rem);
        }
        
        Node curr2=result.next;
        Node prev2=null;
        Node nextN2=result.next;
        
        while(nextN2!=null){
            nextN2=curr2.next;
            curr2.next=prev2;
            prev2=curr2;
            curr2=nextN2;
        }
        
        while(prev2.data==0){
            prev2=prev2.next;
        }
        
        return prev2;
        
    }
}
