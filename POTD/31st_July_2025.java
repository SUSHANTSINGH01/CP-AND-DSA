class Solution {
    public int powerfulInteger(int[][] intervals, int k) {
        // code here
        int maxx = 0;
        int n = intervals.length;
        
        for(int i=0;i<n;i++){
            maxx = Math.max(maxx,intervals[i][1]);
        }
        
       Map<Integer,Integer> mp=new HashMap<>();

        for(int[] interval:intervals){
            mp.put(interval[0],mp.getOrDefault(interval[0],0)+1);
            mp.put(interval[1]+1, mp.getOrDefault(interval[1]+1,0)-1);
        }
        
        
        List<Integer> points = new ArrayList<>(mp.keySet());
        Collections.sort(points);

        int freq = 0;
        int res = -1;
        int f = 0;
        
        for(int point:points){
            freq+=mp.get(point);
            if(freq>=k){
                res=point;
                f=1;
            }else if(f==1){
                res = point-1;
                f=0;
            }
        }
        
        return res;
    }
}
