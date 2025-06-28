class Solution {
    public static ArrayList<Integer> countLessEq(int a[], int b[]) {
        // code here
        Arrays.sort(b);
        ArrayList<Integer> res = new ArrayList<>();
        int n=b.length;
        
        for(int i=0;i<a.length;i++){
            int ind = Arrays.binarySearch(b,a[i]);
            
            if(ind<0){
                ind=-ind-1;
            }else{
                while(ind<b.length && b[ind]==a[i]) {
                    ind++;
                }
            }
            res.add(ind);
        }
        
        return res;
    }
}
