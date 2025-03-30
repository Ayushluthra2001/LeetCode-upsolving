class Solution {
public:
    bool check(string &sub) {
        int left = 0, right = sub.size() - 1;
        while (left < right) {
            if (sub[left] != sub[right]) return false;
            left++, right--;
        }
        return true;
    }

    int longestPalindrome(string s, string t) {
        int maxLen = 0;
        int n = s.size();
         int m = t.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                string left = s.substr(i, j - i + 1);
                for (int x = 0; x < m; x++) {
                    for (int y = x; y < m; y++) {
                        string right = t.substr(x, y - x + 1);
                        string combined = left + right;
                        if (check(combined)) {
                            maxLen = max(maxLen, int(combined.length()));
                        }
                    }
                }
            }
        }

       
       
        for (int i = 0; i < m; i++) {
            for (int j = i; j < m; j++) {
                string sub = t.substr(i, j - i + 1);
                if (check(sub)) {
                    maxLen = max(maxLen, int(sub.size()));
                }
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                string sub = s.substr(i, j - i + 1);
                if (check(sub)) {
                    maxLen = max(maxLen, int(sub.size()));
                }
            }
        }

        
        

        return maxLen;
    }
};
