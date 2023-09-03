class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count=0;
        while(low<=high){
            vector<int>digit;
            int temp=low;
            while(temp>0){
                digit.push_back(temp%10);
                temp=temp/10;
                
            }
            reverse(digit.begin(),digit.end());
            if(digit.size()%2==0 && digit.size()>1) {
                int sum=0,sum1=0;
                int start=0;
                int end=digit.size()-1;
                while(start<=end){
                    sum+=digit[start++];
                    sum1+=digit[end--];
                }
                if(sum==sum1) count++;
            }
            low++;
        }
        return count;
    }
};
