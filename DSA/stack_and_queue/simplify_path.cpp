class Solution {
public:
    string simplifyPath(string path) 
    {
        vector<string>vec;
        int n=path.size();
		for(int i=0; i<n; i++)
        {
			if(path[i]=='/') 
            {
				string temp;
				int l=i+1;
				while(l<n && path[l]!='/') 
                {
					temp.push_back(path[l]);
					l++;
				}
				if(temp.empty() || temp == ".")
				continue;
				if(temp=="..")
                {
					if(!vec.empty())  
                    vec.pop_back();
				}
				else 
				vec.push_back(temp);
			}
		}
		string res;
		for(auto str:vec) 
		res+="/"+str;
        if(res.empty()==true)
        return "/";
		return res; 
    }
};
