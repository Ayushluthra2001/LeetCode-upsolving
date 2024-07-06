class Solution {
public:
    long long maximumPoints(vector<int>& enemyEnergies, int currentEnergy) {  
        long long sum = 0;
        long long mini = INT_MAX;
       
        
        for(auto i : enemyEnergies){
            sum+=i;
            mini = min(mini,(long long)i);
        }
        
        long long x        = currentEnergy;
        long long maxPoint = 0;
        if(x < mini) return 0;
        x += sum - mini;
        maxPoint = x / mini;
        return maxPoint;
    }
};
