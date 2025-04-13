class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        int n = s.size();
        string left = "", right = "", mid = "";

        for (int i = 0; i < 26; ++i) {
           
            int pairs = freq[i] / 2;
            left += string(pairs, 'a' + i);
            freq[i] -= 2 * pairs;
        }

        
        for (int i = 0; i < 26; ++i) {
            if (freq[i]) {
                mid += (char)('a' + i);
                break;
            }
        }

        right = left;
        reverse(right.begin(), right.end());

        return left + mid + right;
    }
};
