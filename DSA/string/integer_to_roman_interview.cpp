string Solution::intToRoman(int A) 
{
    int n[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};   
    string r[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int i=0;
    string res = "";
    
    while (A!=0)
    {
        while (A>=n[i])
        {
            res += r[i];
            A -= n[i];
        }
        i++;
    }
    return res;
}
