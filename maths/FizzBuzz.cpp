vector<string> Solution::fizzBuzz(int A) 
{
    vector<string>ans;
    string str3="Fizz";
    string str5="Buzz";
    string str15="FizzBuzz";
    //ans.push_back("");
    for(int i=1;i<=A;i++)
    {
        if(i%3==0 && i%5==0)
        ans.push_back(str15);
        else if(i%5==0)
        ans.push_back(str5);
        else if(i%3==0)
        ans.push_back(str3);
        else
        ans.push_back(to_string(i));
    }
    return ans;
}

