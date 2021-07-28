struct compare {
    bool operator()(pair<int, int> p1, pair<int, int> p2)
    {
        // if frequencies of two elements are same
        // then the larger number should come first
        if (p1.second == p2.second)
            return p1.first < p2.first;

        // insert elements in the priority queue on the basis of
        // decreasing order of frequencies
        return p1.second < p2.second;
    }
};
    typedef pair<int,int>ppi;
    vector<int> topK(vector<int>& nums, int k) {
        
        unordered_map<int,int>mp;
        priority_queue<ppi,vector<ppi>,greater<ppi>>pq;
        
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        for(auto i=mp.begin();i!=mp.end();i++){
            pq.push({i->second,i->first});
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        vector<int>v;
        while(pq.size()>0){
            v.push_back(pq.top().second);
            pq.pop();
        }
        reverse(v.begin(),v.end());
        return v;        
        // Code here
    }
};
