class Solution {
    public static int rotateDelete(ArrayList<Integer> arr) {
        // code here
        
        int k=1;
        int n=arr.size();
        
        
        for(int i=0; i<(n/2); i++){
            int last_ele=arr.get(arr.size()-1);
            arr.remove(arr.size()-1);
            arr.add(0,last_ele);
            arr.remove(arr.size()-k);
            k++;
        }
        
        return arr.get(0);
    }
}
