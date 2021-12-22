class Solution {

public:

    vector<int> selfDividingNumbers(int left, int right) {

     vector<int>ans;

     for(int i=left;i<=right;i++)

     {

        int temp=i;

        bool x= true;

        while(temp!=0) 

        {

            if( (temp%10)==0 ) 

            {

                x=false;

                break;

            } 

			else if((i%(temp%10))!=0)             {

			    x=false;

                break;  

            }

            else 

            temp/=10;

            

         }

        if(x)

        ans.push_back(i);

        

     }

        return ans;

    }

};};
