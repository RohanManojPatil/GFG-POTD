*******************************GFG POTD******************************
*	               T.C = O(n)							                * 
*	               							                        * 
*	               S.C = O(1)                                           * 
*	                                                                * 
*********************************************************************
class Solution {
  public:
    int maxDistance(vector<int> &arr) {
        unordered_map<int, pair<int, int>> elementPositions;
        int maxDistance = 0;

        for (int i = 0; i < arr.size(); i++) {
            int currentElement = arr[i];

            // If the element is seen for the first time, store its first and last positions as the current index
            if (elementPositions.find(currentElement) == elementPositions.end()) {
                elementPositions[currentElement] = {i, i};
            }
            // If the element is already in the map, update its last position
            else {
                elementPositions[currentElement].second = i;
            }

            // Calculate the distance between the first and last occurrence of the current element
            int start = elementPositions[currentElement].first;
            int end = elementPositions[currentElement].second;
            
            // Update the maximum distance
            maxDistance = max(maxDistance, end - start);
        }

        return maxDistance;
    }
};