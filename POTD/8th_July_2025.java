class Pair{
    int num;
    int freq;
    public Pair(int num,int freq){
        this.num=num;
        this.freq=freq;
    }
}

class Solution {
    
    public ArrayList<Integer> findGreater(int[] arr) {
        // code here
        
        int n=arr.length;
        ArrayList<Integer>res=new ArrayList<>();
        Map<Integer,Integer> mp=new HashMap<>();
        Pair[] freqArr=new Pair[n];
        Stack<Pair>st=new Stack<>();
        int ind=n-1;
        
        for(int i=0;i<n;i++)
        mp.put(arr[i],mp.getOrDefault(arr[i],0)+1);
        
        for(int i=0;i<n;i++)
        freqArr[i]=new Pair(arr[i],mp.get(arr[i]));
     
        while(ind>=0){
            while(!st.isEmpty() && freqArr[ind].freq>=st.peek().freq){
                st.pop();
            }
            int temp = st.isEmpty()?-1 : st.peek().num;
            res.add(temp);
            st.push(freqArr[ind]);
            ind--;
        }
        
        Collections.reverse(res);
        return res;
    }
}
