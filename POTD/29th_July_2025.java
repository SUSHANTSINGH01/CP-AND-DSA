class Pair{
     int first;
     int second;
     
     Pair(int first, int sec){
         this.first=first;
         this.second=sec;
     }
}

class Solution {
    
    public ArrayList<Integer> asciirange(String s) {
        // code here
        
        int n=s.length();
        int[] asciiSum = new int[n];
        ArrayList<Integer> res = new ArrayList<>();
        
        asciiSum[0] = s.charAt(0);
        
        for(int i=1;i<n;i++){
            asciiSum[i] = asciiSum[i-1] + s.charAt(i);
        }
        
        Map<Character, Pair> mp = new HashMap<>();
        
        for(int i=0;i<n;i++){
            Pair pr;
            
            if(mp.containsKey(s.charAt(i))){
                   pr = mp.get(s.charAt(i));
                   pr.second = i;
            }else{
                pr = new Pair(i,0);
            }
            
            mp.put(s.charAt(i), pr);
        }
        
        
        for(Map.Entry<Character, Pair> entry : mp.entrySet()){
            if((entry.getValue().second-entry.getValue().first>1)){
                res.add(asciiSum[entry.getValue().second-1]-asciiSum[entry.getValue().first]);
            }
        }
        
        return res;
        
    }
}
