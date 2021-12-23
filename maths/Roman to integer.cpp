int Solution::romanToInt(string A) 

{            

        map<char,int>mp;

                        int sum=0;

                         int I,V,X,L,C,D,M;

                       mp.insert({'I',1});

                       mp.insert({'V',5});

                                                        mp.insert({'X',10});

                                                                mp.insert({'L',50});

                                                                        mp.insert({'C',100});

                                                                                mp.insert({'D',500});

                                                                                        mp.insert({'M',1000});

        char c=A[A.size()-1];

                sum+=mp[c];

        for(int i=A.size()-2;i>=0;i--)

                {

               char ch=A[i];

                 char ch1=A[i+1];

                                                    if(mp[ch]<mp[ch1])

                                                                      sum-=mp[ch];

                                                                                        else

                                                                                                          sum+=mp[ch];

                                                                                     }

                                                                                                                                    return sum;                                                                                                                                                                                                                                                                                                                                                                                

}
