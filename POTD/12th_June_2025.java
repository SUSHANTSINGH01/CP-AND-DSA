class Solution {
    int[] printKClosest(int[] arr, int k, int x) {
        // code here
        int n=arr.length;
        List<int[]>ls=new ArrayList<>();
        int[] res=new int[k];

        for(int i=0;i<n;i++){
            if(arr[i]!=x){
                ls.add(new int[]{Math.abs(arr[i]-x),i});
            }
        }

        Collections.sort(ls,(a,b)->{
            if(a[0]==b[0]){
                return b[1]-a[1]; 
            }
            return a[0]-b[0]; 
        });

        int i=0;
        
        for(int[] it:ls){
            res[i++]=arr[it[1]];
            k--;
            if(k<=0) 
            break;
        }


        return res;
    }
}
