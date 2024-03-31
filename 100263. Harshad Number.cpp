class Solution {
public:
    int solve(int x){
        int sum=0;
        while(x>0){
            sum+=x%10;
            x=x/10;
        }
        return sum;
    }
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum=solve(x);
        if(x%sum==0) return sum;
        return -1;
    }
};
