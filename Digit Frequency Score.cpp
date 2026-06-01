class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mapping;
        int sum = 0;
        while(n > 0){
            mapping[n%10]++;
            n = n/10;
        }
        for(auto i : mapping) sum += i.first * i.second;

        return sum;
    }
};
