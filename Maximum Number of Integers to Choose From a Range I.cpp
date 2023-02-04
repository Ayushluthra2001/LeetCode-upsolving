class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        int count=0;
        unordered_map<int,int>mapping;
        for(auto i : banned){
            mapping[i]++;
        }
        
        long long sum=0;
        for(int i=1;i<=n;i++){
            if(mapping.find(i)==mapping.end()){
                count++;
                sum+=i;
            }
            if(sum>maxSum) return count-1;
            
            
        }
        
        return count;
        
    }
};
