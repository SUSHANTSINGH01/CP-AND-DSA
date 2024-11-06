class Solution {
    public boolean isLengthEven(Node head) {
        // code here
        int res=0;
        while(head!=null){
            head=head.next;
            res++;
        }
        return res%2==0?true:false;
    }
}
