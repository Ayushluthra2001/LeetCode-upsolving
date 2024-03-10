class Solution {
public:
    int minimumBoxes(vector<int>& apples, vector<int>& capacity) {
       
        sort(capacity.begin(),capacity.end(),greater<int>());
        int i=0;
       
        int count=0;
        int sum=0;
        for(int i=0;i<apples.size();i++){
            sum+=apples[i];
        }
        while(sum>0 && i<capacity.size()){
            sum-=capacity[i++];
            count++;
        }
        return count;
    }
};
