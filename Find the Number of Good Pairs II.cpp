class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
         long long count = 0;
        unordered_map<int, int> map;

        
        for (int num : nums2) {
            int product = num * k;
            
                map[product]++;
            
        }

       
        for(auto i : nums1){
            
            for(int j=1;j<=sqrt(i);j++){
                if(i%j==0){
                    int curr=i/j;
            
                if(curr!=j && map.find(curr)!=map.end()) count+=map[curr];
                if(map.find(j)!=map.end()) count+=map[j];
                }
                
            }
            
        }

        return count;
    }
};
