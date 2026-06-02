class Solution {
public:
    int find(int n){
        int sum = 0;
        while(n%2==0){
            sum+=2;
            n = n/2;

        }
        for(int i = 3; i<=sqrt(n); i+=2){
            while(n%i==0){
                sum+=i;
                n=n/i;
            }
        }
        if(n>2) sum+=n;

        return sum;
    }
    int smallestValue(int n) {
        int x = INT_MAX;
        while( x != find(n)){
            x = find(n);
            n = x;
        }

        return x;
    }
};


