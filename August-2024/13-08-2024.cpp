// Function to find square root
// x: element to find square root
class Solution {
  public:
    long long int floorSqrt(long long int n) {
        long long int start = 0, end = n;
        
        while(start <= end)
        {
            long long int mid = start + (end-start)/2;
            
            if(pow(mid, 2) == n)
            {
                return mid;
            }
            else if(pow(mid, 2) < n)
            {
                if(pow(mid+1, 2) > n)
                {
                    return mid;
                }
                
                start = mid+1;
            }
            else
            {
                end = mid-1;
            }
        }
        
        return -1;
    }
};