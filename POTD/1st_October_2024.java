class Solution {
    public long multiplyTwoLists(Node first, Node second) {
        // Code here
        
           long num1=0;
           long num2=0;
           long md=1000000007;
           while(first!=null)
           {
               num1%=md;
               num1+=(first.data);
               num1*=10;
               
               first=first.next;
           }
           while(second!=null)
           {
               num2%=md;
               num2+=(second.data);
               num2*=10;
               
               second=second.next;
           }
           num1/=10;
           num2/=10;
           num1%=md;
           num2%=md;
           return (num1*num2)%md;
          
    }
}
