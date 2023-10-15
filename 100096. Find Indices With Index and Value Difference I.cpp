class Solution {
public:
    vector<int> findIndices(vector<int>& nums, int indexDifference, int valueDifference) {
        map<pair<int,int>,int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(abs(i-j)>=indexDifference && abs(nums[i]-nums[j])>=valueDifference ) {
                    if(ans.find({i,j})==ans.end() && ans.find({j,i})==ans.end()){
                        return {i,j};
                      
                    }
                    
                }
            }
        }
       
        // // for(auto i : ans){
        // //     pair<int,int>p=i.first;
        // //     temp.push_back(p.first);
        // //     temp.push_back(p.second);
        // // }
        // if(temp.size()==0){
        //     temp.push_back(-1);
        //     temp.push_back(-1);
        // }
        return {-1,-1};
    }
};
