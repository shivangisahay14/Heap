long long sumBetweenTwoKth( long long a[], long long n, long long k1, long long k2)
    {
        sort(a,a+n);
        long long result = 0;
         for (int i=k1; i<k2-1; i++){
          result += a[i];
        }
        return result;
        
    }
