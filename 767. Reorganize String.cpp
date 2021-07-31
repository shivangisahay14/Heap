string reorganizeString(string s) {
        
         unordered_map<char, int> um;
        priority_queue<pair<int, char>> pq;
        string output = "";

        for (auto i : s)
            um[i]++;

        for (auto &i : um)
            pq.push({i.second, i.first});

        while (pq.size() > 1) {
            auto top1 = pq.top(); pq.pop();
            auto top2 = pq.top(); pq.pop();

            output += top1.second;
            output += top2.second;

            if (--top1.first > 0){
                pq.push(top1);
            }
            if (--top2.first > 0){
                pq.push(top2);
            }
        }

        if (pq.size()) {
            if (pq.top().first == 1)
                output += pq.top().second;
            else
                return "";
        }
        return output;
        
    }
