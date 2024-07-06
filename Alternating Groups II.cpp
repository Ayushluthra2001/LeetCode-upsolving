#include <vector>

class Solution {
public:
    int numberOfAlternatingGroups(std::vector<int>& colors, int k) {
        int n = colors.size();
        if (k > n) return 0;

        int count = 0;

        
        bool check = true;
        for (int i = 0; i < k - 1; ++i) {
            if (colors[i] == colors[i + 1]) {
                check = false;
                break;
            }
        }

        if (check) {
            ++count;
        }

       
        for (int i = 1; i < n; ++i) {
           
            int last = i - 1;
            int first = (i + k - 1) % n;
            if (check) {
                if (colors[last] == colors[(last + 1) % n] || colors[first] == colors[(first - 1 + n) % n]) {
                    check = false;
                }
            } else {
                check = true;
                for (int j = i; j < i + k - 1; ++j) {
                    if (colors[j % n] == colors[(j + 1) % n]) {
                        check = false;
                        break;
                    }
                }
            }

            if (check) {
                ++count;
            }
        }

        return count;
    }
};
