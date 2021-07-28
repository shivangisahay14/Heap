vector<int> kLargest(int arr[], int n, int k) {
	    
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int i=0;i<n;i++){
            pq.push(arr[i]);
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>v;
        for(int i=0;i<k;i++){
            v.push_back(pq.top());
            pq.pop();
        }
        
        reverse(v.begin(),v.end());
        return v;
	}
