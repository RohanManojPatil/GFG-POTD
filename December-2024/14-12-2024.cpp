*******************************GFG POTD*************************
*	               T.C = O(logn)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int search(vector<int>& arr, int key) {
        int left = 0;
        int right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            // Check if the mid element is the key
            if (arr[mid] == key) {
                return mid;
            }

            // Determine which part is sorted
            if (arr[left] <= arr[mid]) { // Left part is sorted
                if (arr[left] <= key && key < arr[mid]) { // Key is in the left part
                    right = mid - 1;
                } else { // Key is in the right part
                    left = mid + 1;
                }
            } else { // Right part is sorted
                if (arr[mid] < key && key <= arr[right]) { // Key is in the right part
                    left = mid + 1;
                } else { // Key is in the left part
                    right = mid - 1;
                }
            }
        }

        return -1; // Key not found
    }
};