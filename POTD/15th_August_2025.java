 int n = intervals.length;
        ArrayList<int[]> res = new ArrayList<>();
        int[] temp = new int[2];
        temp[0]=intervals[0][0];
        temp[1]=intervals[0][1];
        int f=0;
        
        for(int i=1;i<n;i++){
            
            if(f==0 && newInterval[1]<temp[0]){
                res.add(newInterval);  
                f=1;
            }
    
           if(newInterval[0]<=temp[1] && newInterval[1]>=temp[0] && f==0){
                temp[0]=Math.min(temp[0],newInterval[0]);
                temp[1]=Math.max(temp[1],newInterval[1]);
                f=1;
            }
            
            if(intervals[i][0]<=temp[1]){
                temp[0]=Math.min(temp[0],intervals[i][0]);
                temp[1]=Math.max(temp[1],intervals[i][1]);
            }
            else{
                res.add(new int[]{temp[0],temp[1]});
                temp[0]=intervals[i][0];
                temp[1]=Math.max(temp[1],intervals[i][1]);
            }
            
        }
        
       if(f==0){
            if(temp[1]<newInterval[0]){
                res.add(temp);
                res.add(newInterval);
            }else{
                temp[0]=Math.min(temp[0],newInterval[0]);
                temp[1]=Math.max(temp[1],newInterval[1]);
                res.add(temp);
            }
            return res;
        } 
        
        res.add(temp);
        return res;
    }
