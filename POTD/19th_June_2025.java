class Solution {
    public static String caseSort(String s) {
        // code here
        int[] freq1 = new int[26];
        int[] freq2 = new int[26];
        
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>='a' && s.charAt(i)<='z'){
                freq1[s.charAt(i)-'a']++;
            }else{
                freq2[s.charAt(i)-'A']++;
            }
        }
        
        int ind1=0;
        int ind2=0;
        
        StringBuilder res = new StringBuilder("");
        
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)>='a' && s.charAt(i)<='z'){
                while(ind1<26 && !(freq1[ind1]>0)){
                    ind1++;
                }
                
                res.append((char)('a'+ind1));
                freq1[ind1]--;
                
            }else{
                while(ind2<26 && !(freq2[ind2]>0)){
                    ind2++;
                }
                
                res.append((char)('A'+ind2));
                freq2[ind2]--;
            }
        }
        
        return res.toString();
    }
}
