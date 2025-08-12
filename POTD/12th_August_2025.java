class Solution {
    public ArrayList<Integer> minMaxCandy(int[] prices, int k) {
        // code here
        Arrays.sort(prices);
        int n=prices.length;
        
        int temp = 0;
        int minn = 0;
        int maxx = 0;
        
        for(int i=0;i<=(n-1-temp);i++){
            minn += prices[i];
            temp += k;
        }
        
        temp = 0;
        
        for(int i=n-1;i>=(temp);i--){
            maxx += prices[i];
            temp += k;
        }
        
        return new ArrayList<>(List.of(minn,maxx));
        
    }
}
