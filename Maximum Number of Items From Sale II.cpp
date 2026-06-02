class Solution {
    #define ll long long
public:
    int maximumSaleItems(vector<vector<int>>& items, int budget) {
        int n=items.size();

        //Step-1: Find cheapest and max_factor O(N)
        int cheapest = INT_MAX;
        int max_factor = INT_MIN;
        for(int i=0;i<n;++i){
            cheapest = min(cheapest,items[i][1]);
            max_factor = max(max_factor,items[i][0]);
        }

        //Step-2: Calculate count of multiples for each factor O(MlogM)
        vector<int> freq(max_factor+1);//Create frequency counter for each factor
        for(int i=0;i<n;++i)
            freq[items[i][0]]++;
        for(int i=1;i<=max_factor;++i){
            if(freq[i]>0){
                for(int index=2*i;index<=max_factor;index+=i)
                    freq[i] += freq[index];
            }
        }

        //Step-3: Iterate for each item and check if including it is profitable over the cheapest ?
        map<ll,ll> cost_count;//Ordered based on increasing price
        for(int i=0;i<n;++i){
            int cost = items[i][1];
            int count = freq[items[i][0]]-1;
            if(count>0 and cost<=2*cheapest)
                cost_count[cost] += count;
        }
        //Step-4: Get total count of books by including optimally
        int total = 0;
        for(auto &[cost,count]: cost_count){
            int include = min<ll>(count,budget/cost);
            total += 2*include;
            budget -= include * cost;
        }
        total += budget/cheapest;//Leftover budget goes to cheapest book
        return total;
    }
};
