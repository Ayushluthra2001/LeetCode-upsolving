class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
        long long count = 0;
        unordered_map<int, int> mapping;
        
        
        for (int i=0;i<hours.size();i++) {
        
            int remainder = hours[i] % 24;
            int complement = (24 - remainder) % 24;  
            
            if (mapping.find(complement) != mapping.end()) {
                count += mapping[complement];
            }
            
            mapping[remainder]++;
        }
        
        return count;
    

    }
};
