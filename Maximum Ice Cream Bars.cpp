class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int maxi = *max_element(costs.begin(),costs.end());
        vector<int>temp(maxi+1,-1);
       
        for(int i =0; i<costs.size(); i++){
            temp[costs[i]]++;
        }
        int count = 0;
        for(int i =0; i<temp.size(); i++){
            if(coins < i) return count;
            else if(temp[i] !=-1){
                while(temp[i]  >=0 && coins >=i){
                    coins-=i;
                    temp[i]--;
                    count++;
                }
                if(coins <= 0) return count;
            }
        }
        return count;
    }
};
