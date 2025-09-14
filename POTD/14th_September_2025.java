class Solution {
    public int startStation(int[] gas, int[] cost) {
        // code here
        int total = 0;
        int ind = -1;
        int n = gas.length;
        int temp = 0;
        
        for(int i=0;i<n;i++){
            total+=(gas[i]-cost[i]);
            temp+=(gas[i]-cost[i]);
            if(gas[i]>=cost[i] && ind==-1){
                ind = i;
                temp = (gas[i]-cost[i]);
            }else if(temp<0){
                ind=-1;
            }
        }
        
        if(total<0)
        return -1;
        
        return ind;
        
    }
}
