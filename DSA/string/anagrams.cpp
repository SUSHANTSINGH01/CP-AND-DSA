vector<vector<int> > Solution::anagrams(const vector<string> &A) 
{
        vector<vector<int>>res;
        int n1=A.size();
        vector<int>ch(n1+1,0);
        for(int i=0;i<n1;i++)
        {
            if(ch[i+1]==1)
            continue;
            int arr[26]={0};
            vector<int>res1;
            int s1=A[i].size();
            string str1=A[i];
            res1.push_back(i+1);
            for(int i=0;i<26;i++)
            arr[i]=0;
            for(int i=0;i<s1;i++)
            arr[str1[i]-'a']++;
            
            for(int k=i+1;k<n1;k++)
            {
                if(ch[k+1]==1)
                continue;
                int arr1[26]={0};
                for(int i=0;i<26;i++)
                arr1[i]=0;
                int s2=A[k].size();
                string str2=A[k];
                for(int j=0;j<s2;j++)
                arr1[str2[j]-'a']++;
            
                int f=0;
                for(int k1=0;k1<26;k1++)
                {
                
                    if(arr[k1]!=arr1[k1])
                    {
                    f=1;
                    break;
                    }
                }
            
                if(f==0)
                {
                   ch[k+1]=1;
                   
                   res1.push_back(k+1);
                }
            }
            if(res1.size()>=1)
            res.push_back(res1);
        }
       return res;
}
