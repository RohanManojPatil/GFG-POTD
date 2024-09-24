vector<int> forP(26, 0), forS(26, 0);
    int n = s.length(), m = p.length(), len = INT_MAX, start = -1, end = -1, cnt = 0, c1 = 0, j = 0;

    if (m > n) {
        return "";
    }

    // Count frequency of characters in p
    for (int i = 0; i < m; i++) {
        forP[p[i] - 'a']++;
        if (forP[p[i] - 'a'] == 1) {
            cnt++;
        }
    }

    // Sliding window
    for (int i = 0; i < n; i++) {
        forS[s[i] - 'a']++;

        // Count how many characters have the same count as in p
        if (forS[s[i] - 'a'] == forP[s[i] - 'a']) {
            c1++;
        }

        // When all characters match
        while (cnt == c1) {
            // Update the minimum length window
            if (len > i - j + 1) {
                start = j;
                end = i;
                len = i - j + 1;
            }
            
            // Try to shrink the window from the left
            forS[s[j] - 'a']--;
            if (forS[s[j] - 'a'] < forP[s[j] - 'a']) {
                c1--;
            }
            j++;
        }
    }

    // If no window is found
    if (start == -1) {
        return "";
    }

    return s.substr(start, len);