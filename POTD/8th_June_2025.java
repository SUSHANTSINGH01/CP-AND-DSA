class Solution {
    
    boolean isPos(String s, int st, String s1, String s2){
        int temp=0;
        if(s1.length()>=1)
        temp+=Integer.parseInt(s1);
        if(s2.length()>=1)
        temp+=Integer.parseInt(s2);
        
        String sum = String.valueOf(temp);
        int l = sum.length();
        
        if(st+l>s.length() || !s.substring(st, st + l).equals(sum))
        return false;
        
        if(st+l==s.length())
        return true;
        
        return isPos(s,st+l,s2,sum);
       
        
    }
    public boolean isSumString(String s) {
        // code here
        int n=s.length();
        
        for(int i=1;i<=(n/2);i++){
            for(int j=i+1;j<n;j++){
                
                String s1=s.substring(0,i);
                String s2=s.substring(i,j);
                
                if(s1.length()>9 || s2.length()>9)
                break;
                
                if(s1.length()>1 && s1.charAt(0)=='0')
                continue;
                
                if(s2.length()>1 && s2.charAt(0)=='0')
                continue;
                
                if(isPos(s,j,s1,s2))
                return true;
            }
        }
        
        return false;
    }
}
