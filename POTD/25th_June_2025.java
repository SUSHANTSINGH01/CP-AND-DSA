class Solution {
    boolean sameFreq(String s) {
        // code here
        int f=0;
        int se=0;
        int t=0;
        int o1=0;
        int o2=0;
        
        int[] freq = new int[26];
        
        for(int i=0;i<s.length();i++){
            freq[s.charAt(i)-'a']++;
        }
        
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                if(f==0 || f==freq[i]){
                    f=freq[i];
                    o1++;
                }else if(se==0 || se==freq[i]){
                    se=freq[i];
                    o2++;
                }else{
                    t=freq[i];
                    return false;
                }
            }
        }

        
        if(se==0 || (se==1 && o2==1))
        return true;
        
        if(f==0 || (f==1 && o1==1))
        return true;
        
        if((Math.abs(o1*f-o2*se)<=1))
        return true;
        
        else
        return false;
        
    }
}
