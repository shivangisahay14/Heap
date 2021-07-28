vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pair<int,int>>pq;
        
        int n=arr.size();
        for(int i=0;i<n;i++){
            pq.push({abs(arr[i]-x),arr[i]});
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>v;
        while(pq.size()>0){
            
            v.push_back(pq.top().second);
            pq.pop();
            
        }
        sort(v.begin(),v.end());
        return v;
        
    }
