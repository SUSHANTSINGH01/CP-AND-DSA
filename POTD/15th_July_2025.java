class Solution {
    public boolean divby13(String s) {
        // code here
        int md = 0;
        int n = s.length();
        
        for(int i=0;i<n;i++){
            md = ((md*10) + (s.charAt(i)-'0')) % 13;
        }
        
        return md==0;
        
    }
}
