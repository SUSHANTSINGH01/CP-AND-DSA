class Solution {
    public ArrayList<Integer> maxOfMins(int[] arr) {
        // code here
        int n = arr.length;
        int[] arr1 = new int[n];
        int[] arr2 = new int[n];
        Stack<Integer> st = new Stack<>();
        int[] res = new int[n];
        ArrayList<Integer> res1 = new ArrayList<>();
        
        for(int i=0;i<n;i++){
            
            while(!st.isEmpty() && arr[st.peek()] >= arr[i])
            st.pop();
            
            if(st.isEmpty())
            arr1[i] = -1;
            else
            arr1[i] = st.peek();
            
            st.push(i);
        }
        
        st.clear();
        
        for(int i=n-1;i>=0;i--){
            
            while(!st.isEmpty() && arr[st.peek()] >= arr[i]) 
            st.pop();
            
            if(st.isEmpty())
            arr2[i] = n;
            else
            arr2[i] = st.peek();
            
            st.push(i);
        }
       
        
        for(int i=0;i<n;i++){
            
            int l = arr2[i] - arr1[i] - 1;
            if(l > 0) 
            res[l-1] = Math.max(arr[i],res[l-1]);
            
        }
        
        for(int i=n-2;i>=0;i--)
        res[i] = Math.max(res[i], res[i+1]);
        
        for(int i=0;i<n;i++)
        res1.add(res[i]);
        
        return res1;
    }
}
