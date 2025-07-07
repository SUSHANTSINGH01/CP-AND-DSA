class Solution {
    public ArrayList<Integer> nextLargerElement(int[] arr) {
        // code here
        
        int n=arr.length;
        int[] newArr = new int[2*n];
        
        for(int i=0;i<n;i++){
            newArr[i]=arr[i];
            newArr[n+i]=arr[i];
        }
        
        ArrayList<Integer> res = new ArrayList<>();
        
        Stack<Integer> st = new Stack<>();
        
        for(int i=(2*n)-1;i>=0;i--){
            
            while(!st.isEmpty() && st.peek()<=newArr[i]){
                st.pop();
            }
            
            if(!st.isEmpty() && i<=(n-1))
            res.add(st.peek());
            else if(i<=(n-1))
            res.add(-1);
            
            st.push(newArr[i]);
            
        }
        
        Collections.reverse(res);
       
        
        return res;
        
        
    }
}
