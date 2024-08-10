// User function Template for C++
class Solution {
  public:
    int isValid(string str) {
    int n = str.length();
    int dotCount = 0, prev = 0;
    
    if (n == 0 || str[0] == '.' || str[n-1] == '.') {
        return 0;
    }

    for (int i = 0; i < n; ++i) {
        if (str[i] == '.') {
            if (i == prev || i - prev > 3) {
                return 0;
            }
            string segment = str.substr(prev, i - prev);
            if (segment.empty() || (segment.length() > 1 && segment[0] == '0') || stoi(segment) > 255) {
                return 0;
            }
            prev = i + 1;
            dotCount++;
        }
    }
    
    if (dotCount != 3 || prev >= n) {
        return 0;
    }

    string lastSegment = str.substr(prev);
    if (lastSegment.empty() || (lastSegment.length() > 1 && lastSegment[0] == '0') || stoi(lastSegment) > 255) {
        return 0;
    }

    return 1;
}

};