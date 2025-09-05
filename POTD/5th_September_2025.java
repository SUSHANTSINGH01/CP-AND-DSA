class Solution {
    public Node segregate(Node head) {
        // code here
        int z=0;
        int o=0;
        int t=0;
        
        Node temp = head;
        Node st = temp;
        
        while(head!=null){
            if(head.data==0)
            z++;
            else if(head.data==1)
            o++;
            else
            t++;
            head=head.next;
        }
        
        while(z-- > 0){
            temp.data = 0;
            temp = temp.next;
        }
        
         while(o-- > 0){
            temp.data = 1;
            temp = temp.next;
        }
        
         while(t-- > 0){
            temp.data = 2;
            temp = temp.next;
        }
        
        return st;
    }
}
