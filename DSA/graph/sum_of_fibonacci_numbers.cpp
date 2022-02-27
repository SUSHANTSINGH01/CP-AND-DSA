int Solution::fibsum(int A) 
{
    vector<int>fibonaccii;
    int res=0;
 	fibonaccii.push_back(1);
    fibonaccii.push_back(1);      
 	for(int i=2;fibonaccii[i-1]<A;i++)
    {
    	int val=fibonaccii[i-1]+fibonaccii[i-2];
 		fibonaccii.push_back(val);
 	}
		 
    int len=fibonaccii.size();
	len--;
	while(A>0)
    {
		while(fibonaccii[len]>A)        
	 	len--;
			  
		A-=fibonaccii[len];
		res++;
	}
	return res;
}
