class Solution {
    ArrayList<Integer> removeDuplicate(int arr[]) {
        // code here

        ArrayList<Integer> arrayList = new ArrayList<>();
        boolean[] vis = new boolean[101]; 
        for(int i=0;i<101;i++){
            vis[i]=false;
        }
        for(int i=0;i<arr.length;i++){
            if(!vis[arr[i]]){
                arrayList.add(arr[i]);
                vis[arr[i]]=true;
            }
        }
        return arrayList;
    }
}
