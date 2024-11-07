class Solution {

    public List<Integer> findSplit(int[] arr) {
        // Return an array of possible answer, driver code will judge and return true or
        // false based on
        
        List<Integer> res=new ArrayList<>();
        int n=arr.length;
        int sum=0;
        
        for(int i=0;i<n;i++)
        sum+=arr[i];
        
        if(sum%3!=0){
            res.add(-1);
            res.add(-1);
            return res;
        }
        
        else{
            int count=0;
            int part=sum/3;
            int temp=0;
            for(int i=0;i<n;i++){
                temp+=arr[i];
                if(temp==part) {
                    count++;
                    temp=0;
                    res.add(i);  
                    if(count==2) {
                        return res;  
                    }
                }
            }
        }
        
        res.add(-1);
        res.add(-1);
        return res;
    }
}
