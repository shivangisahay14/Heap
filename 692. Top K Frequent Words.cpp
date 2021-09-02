struct comp {
        bool operator() (const pair<int,string> a, const pair<int,string> b) {
            if((a.first < b.first) || ((a.first == b.first) && (a.second > b.second)))
                return true;
            return false;
        }
    };
        
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        priority_queue < pair<int,string> , vector<pair<int,string>> , comp > hp;
        unordered_map <string,int> mp;
        vector <string> res;
        
        for(int i=0; i<words.size(); i++)
            mp[words[i]]++;
        
        for(auto i=mp.begin(); i!=mp.end(); i++)
            hp.push({i->second, i->first});
        
        while(k--) {
            res.push_back(hp.top().second);
            hp.pop();
        }
        
        return res;        
    }
