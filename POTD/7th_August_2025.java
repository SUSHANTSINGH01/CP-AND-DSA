class Solution {
    public int minDifference(String[] arr) {
        // code here
       List<Integer> ls = new ArrayList<>();
        int n = arr.length;
        
        for(int i=0;i<n;i++){
          
            String[] parts = arr[i].split(":");
            int hr = Integer.parseInt(parts[0]);
            int minn = Integer.parseInt(parts[1]);
            int sec = Integer.parseInt(parts[2]);
             int time = hr * 3600 + minn * 60 + sec;
            ls.add(time);
        }
        
        Collections.sort(ls);
        
        int res = Integer.MAX_VALUE;
        
        for(int i=1;i<n;i++){
            res = Math.min(res,ls.get(i)-ls.get(i-1));
        }
        
        res = Math.min(res,86400-ls.get(n-1)+ls.get(0));
        return res;
        
    }
}
