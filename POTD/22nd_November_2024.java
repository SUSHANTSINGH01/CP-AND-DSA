class Solution {
    public int maximumProfit(int prices[]) {
        // Code here
        int minn=123456789;
        int res=0;
        for(int i=0;i<prices.length;i++){
            minn=Math.min(prices[i],minn);
            res=Math.max(res,prices[i]-minn);
        }
        return res;
    }
}
