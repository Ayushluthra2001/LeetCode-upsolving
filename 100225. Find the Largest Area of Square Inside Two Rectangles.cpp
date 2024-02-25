class Solution {
public:
    long long largestSquareArea(std::vector<std::vector<int>>& bottomLeft, std::vector<std::vector<int>>& topRight) {
        long long maxArea = 0;

        for (int i = 0; i < bottomLeft.size(); i++) {
            for (int j = i + 1; j < bottomLeft.size(); j++) {
                int minX = std::max(bottomLeft[i][0], bottomLeft[j][0]);
                int minY = std::max(bottomLeft[i][1], bottomLeft[j][1]);
                int maxX = std::min(topRight[i][0], topRight[j][0]);
                int maxY = std::min(topRight[i][1], topRight[j][1]);

                if (minX < maxX && minY < maxY) {
                    long long side = std::min(maxX - minX, maxY - minY);
                    maxArea = std::max(maxArea, side * side);
                }
            }
        }

        return maxArea;
    }
};
