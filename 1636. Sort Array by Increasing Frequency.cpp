struct compare{
    bool operator() (const pair<int, int>& a, const pair<int, int>& b) {
    
            if(a.first != b.first) 
                return a.first > b.first;           // min heap (high priority)     
            else 
                return a.second < b.second;         // low order if we got same priority 
        }
        
    };
    typedef pair<int,int>ppi;
    vector<int> frequencySort(vector<int>& nums) {
        
        int n=nums.size();
        priority_queue<ppi,vector<ppi>,compare>pq;
        unordered_map<int,int>mp;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto i=mp.begin();i != mp.end();i++){
            pq.push({i->second,i->first});
        }
        vector<int>v;
        while(pq.size()>0){
            
            int freq=pq.top().first;
            int ele=pq.top().second;
            
            for(int i=0;i<freq;i++){
                v.push_back(ele);
            }
            pq.pop();
            
        }
        
        return v;
        
    }
