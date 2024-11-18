class Solution {
    // Function to rotate an array by d elements in counter-clockwise direction.
    static void rotateArr(int arr[], int d) {
        // add your code here
        
        int n=arr.length;
        int steps=d%n;
        Queue<Integer> q=new LinkedList<>();
        
        int i=0;
        int j=0;
        
        while(i<steps){
            q.add(arr[i]);
            i++;
        }
        
        while(i<arr.length){
            arr[j++]=arr[i++];
        }
        
        while(!q.isEmpty()){
            arr[j++]=q.poll();
        }
    }
}
