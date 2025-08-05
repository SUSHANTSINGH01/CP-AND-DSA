class Solution {
    public boolean isPalinSent(String s) {
        // code here
        
        int n = s.length();
        StringBuilder str = new StringBuilder();

        for (char c:s.toCharArray()) {
            str.append(Character.isLetter(c) ? Character.toUpperCase(c) : c);
        }

        s = str.toString();
        
        
        int i=0;
        int j=n-1;
        
        while(i<j){
            while((i<j) && !(s.charAt(i)>='A' && s.charAt(i)<='Z') && 
               !(s.charAt(i)>='0' && s.charAt(i)<='9')){
                   i++;
            }
            while((i<j) && !(s.charAt(j)>='A' && s.charAt(j)<='Z') &&
               !(s.charAt(j)>='0' && s.charAt(j)<='9')){
                   j--;
            }
            
            if((i<j) && s.charAt(i)!=s.charAt(j))
            return false;
            
            i++;
            j--;
            
        }
        
        return true;
    }
}
