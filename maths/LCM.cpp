long long int gcd(long long int a,long long  int b) 
{
	if(b==0)	
    return a;
	return gcd(b, a%b);
}

long long int lcm(long long int a, long long int b) 
{
	return (a*b)/gcd(a,b);
}
long Solution::solve(int A, int B) 
{
    return lcm(A,B);
}
