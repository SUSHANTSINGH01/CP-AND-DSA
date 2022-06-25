class Solution {
public:
    string interpret(string c) {
        
                 string s;
				for(auto i=0;i<c.length();)
				{
					if(c[i]=='G')
                    {
                        s.push_back('G');
                    }
					else if(c[i]=='(' && c[i+1]==')')
					{
						s.push_back('o');
                        i++;
					}
					else
					{
						s+="al";
                        i+=3;
					}
					i++;
				}
				return s;
    }
};
