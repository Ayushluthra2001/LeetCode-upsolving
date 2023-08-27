class Solution {
public:
    long long minimumPossibleSum(int n, int target) {
        if(n==1) return n;
        long long sum=0;
        int j=1;
        int i=0;
        unordered_map<int,int>mapping;
        
        while(i<n){
           if(mapping.find(j)==mapping.end()){
               sum+=j;
               mapping[abs(target-j)];
               j++;
               i++;
           }else{
               j++;
           }
            
            
        }
        return sum;
    }
};
