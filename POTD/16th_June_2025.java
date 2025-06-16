class Solution {
    int cost(int[] heights,int[] cost,int mid)
    {
        int res=0;
        
        for(int i=0;i<heights.length;i++)
        res+=Math.abs(heights[i]-mid)*cost[i];
        
        return res;
    }
    
    public int minCost(int[] heights, int[] cost) {
        // code here
        
        int minn=Integer.MIN_VALUE;
        int maxx=Integer.MAX_VALUE;
        
        for(int i=0;i<heights.length;i++){
            minn=Math.min(heights[i],minn);
            maxx=Math.max(heights[i],maxx);
        }
        
        while(minn<maxx){
            int mid=(minn+maxx)/2;
            int temp1=cost(heights,cost,mid);
            int temp2=cost(heights,cost,mid+1);
            
            if(temp2>=temp1)
            maxx=mid;
            else
            minn=mid+1;
        }
        
        return cost(heights,cost,minn);
    }
}
