class Solution {
    Node mergeKLists(Node[] arr) {
        // code here
        int n = arr.length;
        boolean f = true;
        Node st = new Node(0);
        Node res = st;
        while(f){
            f = false;
            Node temp = new Node(1005);
            int ind = -1;
            for(int i=0;i<n;i++){
                if(arr[i] != null && arr[i].data<temp.data){
                    ind = i;
                    temp = arr[i];
                    f = true;
                }
            }
            
            if(ind==-1)
            break;
            
            st.next = temp;
            st = st.next;
            
            arr[ind] = arr[ind].next;
        }
        
        return res.next;
    }
}
