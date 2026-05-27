class Solution {
public:
    int reverse(int n ){
        int ans = 0;
        while(n>0){
            int lastDigit = n%10;
            ans = lastDigit + ans*10;
            n = n/10;
        }
        return ans;
    }
    int sumOfPrimesInRange(int n) {
        int total = 0;
        vector<int>primeNumbers(1001, 1);
        primeNumbers[0] = 0;
        primeNumbers[1] = 0;
        vector<int>ans;
        for(int i = 2; i<=1000; i++){
            for(int j = i*2; j<=1000; j+=i){
                primeNumbers[j] = 0;
            }
        }

        for(int i =0; i<=1000; i++) if(primeNumbers[i] == 1)ans.push_back(i);

        int reversedNumber = reverse(n);
        int start = min(n , reversedNumber);
        int end = max(n, reversedNumber);
        cout<<start<<" "<<endl;
        for(int i = 0; i<ans.size(); i++){
            if(ans[i] >=start && ans[i]<=end)  total+=ans[i];
        }
        return total;

    }
};
