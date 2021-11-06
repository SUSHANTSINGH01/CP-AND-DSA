class Solution {
public:
        vector<string>ans;
        unordered_map<string,int>mp;
        void solve(string s,int min_rem_allow)
        {
            if(mp[s]!=0)
            return;
            else
            mp[s]++;

            if(min_rem_allow==0)
            {
                int min_rem_now=g_min_invalid(s);
                if(min_rem_now==0)
                ans.push_back(s);
                return;
            }
            for(int i=0;i<s.size();i++)
            {
                string lft=s.substr(0,i);
                string rght=s.substr(i+1);

                solve(lft+rght,min_rem_allow-1);
            }
            return;
        }
        
        int g_min_invalid(string s)
        {
            stack<char>st;
            int i=0;
            while(i<s.size())
            {
                if(s[i]=='(')
                st.push('(');
                else if(s[i]==')')
                {
                    if(st.empty()==false && st.top()=='(')
                    st.pop();
                    else
                    st.push(')');
                }
                i++;
            }
            return st.size();
        }
        vector<string> removeInvalidParentheses(string s) 
        {
            int min_rem=g_min_invalid(s);
            cout<<min_rem<<" ";
            solve(s,min_rem);
            return ans;
        }
};
