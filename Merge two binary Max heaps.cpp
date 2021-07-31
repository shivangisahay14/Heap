void heapify(vector<int>&arr,int k,int i){
        
        int max_index=i;
        int l=2*i+1;
        int r=2*i+2;
        
        if(l<k and arr[l]>arr[max_index]){
            max_index=l;
        }
        if(r<k and arr[r]>arr[max_index]){
            max_index=r;
        }
        if(max_index != i){
            swap(arr[max_index],arr[i]);
            heapify(arr,k,max_index);
        }
        
    }
    vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        
        vector<int>arr;
        for(int i=0;i<n;i++){
            arr.push_back(a[i]);
        }
        for(int i=0;i<m;i++){
            arr.push_back(b[i]);
        }
        int k=m+n;
        //(k/2)-1 index of last non-leaf node
        for(int i=k/2;i>=0;i--){
            heapify(arr,k,i);
        }
        
        return arr;
        
    }
