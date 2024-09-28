class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {
        long long ans = 0;
        
        sort(maximumHeight.begin(),maximumHeight.end(), greater<int>());
        
//         for(auto i : maximumHeight ) cout<<i<<" ";
//         cout<<endl;
        
        for(int i =1;i<maximumHeight.size();i++){
            if(maximumHeight[i] == maximumHeight[i-1] ) maximumHeight[i]-=1;
            else if(maximumHeight[i] > maximumHeight[i-1]) maximumHeight[i] = maximumHeight[i-1] -1;
            if(maximumHeight[i] <= 0) return -1;
        }
        for(auto i : maximumHeight) ans+=i;
        return ans;
    }
};
