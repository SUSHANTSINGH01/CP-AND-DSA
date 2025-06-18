class Solution {
    ArrayList<ArrayList<String>> res;
    
    boolean isPal(String str, int l, int r){

        while(l<r){
              if(str.charAt(l)!=str.charAt(r))
              return false;
              
              l++;
              r--;
              
        }
        
        return true;
        
    }
    
    void findAllPal(String s, ArrayList<String> temp, int left){
        
        if(left==s.length()){
            res.add(new ArrayList<>(temp));
            return ;
        }
        for(int right=left;right<s.length();right++){
            if(isPal(s,left,right)){
                temp.add(s.substring(left,right+1));
                findAllPal(s,temp,right+1);
                temp.remove(temp.size()-1);
            }
            
        }
        
        
        
    }
    public ArrayList<ArrayList<String>> palinParts(String s) {
        // code here
        res=new ArrayList<>();
        findAllPal(s,new ArrayList<>(),0);
        return res;
    }
}
