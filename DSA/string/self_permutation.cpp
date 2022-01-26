int Solution::permuteStrings(string A, string B) 
{

    int arr1[26]={0};
    int arr2[26]={0};
    for(int i=0;i<A.size();i++)
    arr1[A[i]-'a']++;
    for(int i=0;i<B.size();i++)
    arr2[B[i]-'a']++;

    for(int i=0;i<26;i++)
    if(arr1[i]!=arr2[i])
    return 0;

    return 1;
    
}
