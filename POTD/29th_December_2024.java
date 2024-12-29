class Solution {
    public ArrayList<Integer> intersectionWithDuplicates(int[] a, int[] b) {
        // code here
        HashSet<Integer> hs= new HashSet<>();
        ArrayList<Integer> res = new ArrayList<>();
        for(int i=0;i<a.length;i++)
        hs.add(a[i]);
        
        for(int i=0;i<b.length;i++){
            if(hs.contains(b[i])){
                res.add(b[i]);
                hs.remove(b[i]);
            }
        }
        return res;
    }
}
