class Solution {
    public String longestString(String[] words) {
        // code here
       
        String res="";
        Set<String>st=new HashSet<>();
        
        Arrays.sort(words); 
        
        for(String word:words)
        {
            int n=word.length();
            if(n==1 || st.contains(word.substring(0,n-1)))
            {
                st.add(word);
                if(word.length()>res.length() || word.compareTo(res)<0)
                res=word;
                
            }
        }
        
        return res;
    }
}
