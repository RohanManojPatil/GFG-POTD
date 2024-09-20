// User function template for C++
class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &height) {
        int maxHeight = height[0], buildingCount = 1;
        
        for(int i = 1; i<height.size(); i++)
        {
            if(height[i] > maxHeight)
            {
                buildingCount++;
                maxHeight = height[i];
            }
        }
        
        return buildingCount;
    }
};