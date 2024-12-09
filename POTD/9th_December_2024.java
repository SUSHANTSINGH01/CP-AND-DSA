class Solution {
    static ArrayList<int[]> insertInterval(int[][] intervals, int[] newInterval) {
        // code here
        int m=intervals.length;
        int[][] arr=new int[m+1][2];
        for(int i=0;i<m;i++){
            arr[i]=intervals[i];
        }
        arr[m]=newInterval;
        int n=m+1;
        ArrayList<int[]>res=new ArrayList<>();
        Arrays.sort(arr,(a,b)->Integer.compare(a[0],b[0]));
        //Arrays.sort(arr,(a,b)->a[0]-b[0]);
        int st = arr[0][0];
        int end = arr[0][1];
        for(int i=1;i<n;i++){
            int[] current=arr[i];
            if(current[0]<=end){
                end=Math.max(end,current[1]);
            }else{
                res.add(new int[]{st,end});
                st=current[0];
                end=current[1];
            }
        }
        res.add(new int[]{st, end});
        return res;
    }
}
