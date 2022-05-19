int Solution::solve(int A, int B, int C, int D, int E) 
{
    double minn_cost1=(B*1.0)/C;
    double minn_cost2=(D*1.0)/E;
    //cout<<minn_cost1<<" "<<minn_cost2<<endl;
    double minn=min(minn_cost1,minn_cost2);
    double maxx=max(minn_cost1,minn_cost2);
    int res=0;
   if(minn_cost1==maxx)
   {
        while(A>0 && (A>=B || A>=D))
        {
            if(A%B==0)
            {
              res+=((A/B)*C);
              A=0;
            }
            else
            {
                res+=(E);
                A-=D;
            }
        }
   }
   else
   {
       while(A>0 && (A>=B || A>=D))
        {
            if(A%D==0)
            {
              res+=((A/D)*E);
              A=0;
            }
            else
            {
                res+=(C);
                A-=B;
            }
            //cout<<res<<endl;
        }
   }
   if(A==0)
   return res;

   return -1;
   
}
