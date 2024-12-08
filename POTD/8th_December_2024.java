class Solution {
    public List<int[]> mergeOverlap(int[][] arr) {
        // Code here // Code here
        int n=arr.length;
        List<int[]>res=new ArrayList<>();
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
