class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int price=0;
        
            price=prices[0]+prices[1];
        if(money>=price) return money-price;
        return money;
    }
};
