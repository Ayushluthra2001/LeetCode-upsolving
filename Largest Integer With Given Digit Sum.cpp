class Solution {
public:
int maxi = 0;
    int solve(int n, int s,int curr,int x){
        if(n<0 || curr > s) return 0;
        if(n == 0 && s == curr) {
            maxi = max(maxi ,x);
            
        }
        for(int i = 0; i<=9; i++){
            if(curr + i<=s)solve(n-1,s,curr+i,x*10+i);
        }
        return curr;
    }
    int largestInteger(int n, int s) {
        if(s ==0) return 0;
      solve(n , s,0,0);
        return maxi == 0 ?-1 : maxi;
    }
};
