class Solution {
public:
    int maxPathSum(vector<int> &a, vector<int> &b) {

        int i = 0, j = 0;
        int n = a.size(), m = b.size();

        long long sum1 = 0;
        long long sum2 = 0;
        long long ans = 0;

        while (i < n && j < m) {

            // Traverse array a
            if (a[i] < b[j]) {
                sum1 += a[i];
                i++;
            }

            // Traverse array b
            else if (a[i] > b[j]) {
                sum2 += b[j];
                j++;
            }

            // Common element found
            else {

                // Take the better path till now
                ans += max(sum1, sum2);

                // Count common element only once
                ans += a[i];

                // Reset both segment sums
                sum1 = 0;
                sum2 = 0;

                i++;
                j++;
            }
        }

        // Add remaining elements of array a
        while (i < n) {
            sum1 += a[i++];
        }

        // Add remaining elements of array b
        while (j < m) {
            sum2 += b[j++];
        }

        // Add the better remaining path
        ans += max(sum1, sum2);

        return ans;
    }
};
