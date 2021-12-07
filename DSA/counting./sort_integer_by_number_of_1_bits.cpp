class Solution {
public:
    vector<int> sortByBits(vector<int>& arr)
    {
        sort(begin(arr), end(arr), [](auto a, auto b) 
        {
             int x = __builtin_popcount(a);
             int y = __builtin_popcount(b);
            return x == y ? a < b : x < y;
        });
        return arr;
    }
};
