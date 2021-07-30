long long minCost(long long arr[], long long n) {
        
        priority_queue<long long,vector<long long>,greater<long long>>p;
        
        for(int i=0;i<n;i++){
            p.push(arr[i]);
        }
        
        long long result=0;
       while(!p.empty()&&(p.size()!=1))
     {  
         long long sum=p.top();
         p.pop();
     
         sum+=p.top();
         p.pop();
         p.push(sum);
         result+=sum;
     }
     return result;

        
    }
