class Solution {
    ArrayList<Integer> search(String pat, String txt) {
        // Code here
        int n=txt.length();
        int m=pat.length();
        int txtHash = 0;
        int patHash = 0;
        int md = 100000;
        ArrayList<Integer> list = new ArrayList<>();
        
        if(m>n)
        return list;
         
        for(int i=0;i<m;i++){
            txtHash=(txtHash+(txt.charAt(i)-'a'))%md;
            patHash=(patHash+(pat.charAt(i)-'a'))%md;
        }
        
        if(txt.substring(0,m).equals(pat))
        list.add(1);
        
        int j=0;
        for(int i=m;i<n;i++){
           
            txtHash=(txtHash-(txt.charAt(j)-'a'))%md;
            txtHash=(txtHash+(txt.charAt(i)-'a'))%md;
            if(txtHash==patHash){
                if(txt.substring(j+1,j+m+1).equals(pat))
                list.add(j+2);
            }
            j++;
            
        }
        
        return list;
    }
}
