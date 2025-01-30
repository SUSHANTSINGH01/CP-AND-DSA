class Solution {
    public boolean isSafe(int row, int col, List<Integer> curr, int n) {
        for(int i=0;i<col;i++)
        if (row+1==curr.get(i))
        return false;
        
        int row1=row;
        int col1=col;
        

        while(row>0 && col>0){
            row--;
            col--;
            if(curr.get(col)==row+1)
            return false;
            
        }
 
        col=col1;
        row=row1;

        while(row<n && col>0) {
            row++;
            col--;
            if(curr.get(col)==row+1)
            return false;
           
        }
    
        return true;
    }

    public void solve(int col, List<Integer>curr, ArrayList<ArrayList<Integer>>res, int n) {
        if(col==n){
            res.add(new ArrayList<>(curr)); 
            return;
        }
        
        for(int row=0;row<n;row++){
            if(isSafe(row,col,curr,n)){
                curr.add(row+1); 
                solve(col+1,curr,res,n);
                curr.remove(curr.size()-1);
            }
        }
    }
    public ArrayList<ArrayList<Integer>> nQueen(int n) {
        // code here
        
        ArrayList<ArrayList<Integer>>res=new ArrayList<>();
        List<Integer>vec=new ArrayList<>();
        
        solve(0,vec,res,n);
        return res;
    }
}
