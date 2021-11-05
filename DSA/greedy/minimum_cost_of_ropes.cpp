 priority_queue <long long,vector<long long >,greater<long long>> minh;
       for(long long i =0;i<n;i++)
           minh.push(arr[i]);
       long long sum =0;    
       while(minh.size()>=2){
           
           long long a  = minh.top();
           minh.pop();
           long long b = minh.top();
           minh.pop();
           long long temp = a + b;
           minh.push(temp);
           sum += temp;
           
       }
       return sum;
