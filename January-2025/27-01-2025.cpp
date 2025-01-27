*******************************GFG POTD*************************
*	               T.C = O(N)							                * 
*	               							                        * 
*	               S.C = O(N)                                           * 
*	                                                                * 
*********************************************************************
// design the class in the most optimal way


class LRUCache {
   private:
  public:
    // Constructor for initializing the cache capacity with the given value.
    int x = 0; // Recency counter (like a timestamp)
    int y=0;   // Pointer for least-recent recency value
    int mppSize;
    unordered_map<int, pair<int, int>> mpp; // Key -> {value, recency}
    unordered_map<int, int> mp;    // Recency -> Key
    LRUCache(int cap) {
        // code here
          mppSize = cap;
    }

    // Function to return value corresponding to the key.
    int get(int key) {
        // your code here
        if (mpp.find(key) != mpp.end()) {
            x++; // Increment recency counter
            mp.erase(mpp[key].second);
            mp[x]=key;
            mpp[key].second = x; // Update recency of the accessed key
            return mpp[key].first; // Return the value
        } else {
            return -1; // Key not found
        }
    }

    // Function for storing key-value pair.
    void put(int key, int value) {
        // your code here
           x++; // Increment recency counter

        // If the key is already present, update its value and recency
        if (mpp.find(key) != mpp.end()) {
            mp.erase(mpp[key].second);
            mp[x]=key;
            mpp[key] = {value, x};
            return;
        }

        // If cache is at full capacity, evict the least recently used item
        if (mpp.size() == mppSize) {
            while(!mp.count(y)) y++;
            mpp.erase(mp[y]);
            mp.erase(y);
        }
        // Insert the new key-value pair with the current recency
        mpp[key] = {value, x};
        mp[x]=key;
    }
};