class Solution {
    // Function to return a list containing the union of the two arrays.
    public static ArrayList<Integer> findUnion(int a[], int b[]) {
        // add your code here
        
        ArrayList<Integer> res = new ArrayList<>();
        
        int n=a.length;
        int m=b.length;
        
        int i=0;
        int j=0;
        
        while(i<n && j<m){
            if(a[i]==b[j]){
                res.add(a[i]);
                i++;
                j++;
            }
            else if(a[i]<b[j]){
                res.add(a[i]);
                i++;
            }
            else{
                res.add(b[j]);
                j++;
            }
        }
        
        while(i<n){
            res.add(a[i]);
            i++;
        }
        
        while(j<m){
            res.add(b[j]);
            j++;
        }
        
        return res;
    }
}
