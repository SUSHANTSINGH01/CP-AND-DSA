
class Solution {
    public String addBinary(String s1, String s2) {
        // code hereStringBuStringBuilder
          StringBuilder res=new  StringBuilder();
        int n=s1.length();
        int m=s2.length();
        n--;
        m--;
        int carry=0;
        while(n>= 0 || m >= 0 || carry != 0) {
        int sum = carry;
        if (n >= 0) {
            sum += s1.charAt(n--) - '0';
        }
        if (m >= 0) {
            sum += s2.charAt(m--) - '0';
        }
        
        carry = sum / 2;
        res.append(sum % 2);
    }
          while (res.length() > 1 && res.charAt(res.length() - 1) == '0') {
            res.deleteCharAt(res.length() - 1);
        }

        return res.reverse().toString();
}
}
