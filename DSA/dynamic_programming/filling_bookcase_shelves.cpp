class Solution {
    vector <vector<int>> ans;
    int n;
public:
    int solve(vector<vector<int>>& books, int w, int i, int cur_wdth, int cur_slf_height) 
    {        
        if(cur_wdth > w) 
        return INT_MAX;
        
        if(i >= n) 
        return cur_slf_height;
        
        if(ans[i][cur_wdth] != -1) 
        return ans[i][cur_wdth];
        
        int cur_bk_ht = books[i][1];
        int cur_bk_wdth = books[i][0];
        
        int add = solve(books, w, i + 1, cur_wdth + cur_bk_wdth, max(cur_slf_height, cur_bk_ht));
        
        int create_slf = cur_slf_height + solve(books, w, i + 1, cur_bk_wdth, cur_bk_ht);

        return ans[i][cur_wdth] = min(add, create_slf);
        
    }
    
    int minHeightShelves(vector<vector<int>>& books, int shelf_width) 
    {
        n = books.size();
        
        ans.resize(n, vector<int>(shelf_width + 1, -1));
        
        return solve(books, shelf_width, 0, 0, 0);
    }
};
