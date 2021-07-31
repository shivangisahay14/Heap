// A pair of pairs, first element is going to
    // store value, second element index of array
    // and third element index in the array.
    typedef pair<int, pair<int, int> > ppi;
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
         vector<int> output;
 
        // Create a min heap with k heap nodes. Every
        // heap node has first element of an array
        priority_queue<ppi, vector<ppi>, greater<ppi> > pq;
     
        for (int i = 0; i < K; i++){
            pq.push({ arr[i][0], { i, 0 } });
            
            
        }
     
        // Now one by one get the minimum element
        // from min heap and replace it with next
        // element of its array
        while (pq.empty() == false) {
            ppi curr = pq.top();
            pq.pop();
     
            // i ==> Array Number
            // j ==> Index in the array number
            int i = curr.second.first;
            int j = curr.second.second;
     
            output.push_back(curr.first);
     
            // The next element belongs to same array as
            // current.
            //K=arr[i].size();
            if (j + 1 < K){
                pq.push({ arr[i][j + 1], { i, j + 1 } });
            }
        }
     
        return output;
                    
    }
