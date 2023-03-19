class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int>bits;
        int temp=n;
        while(temp>0){
            bits.push_back(temp%2);
            temp=temp/2;
        }
        // reverse(bits.begin(),bits.end());
        int odd=0,even=0;
        for(int i=0;i<bits.size();i++){
            cout<<bits[i]<<" ";
            if(i%2==0 && bits[i]==1) even++;
            if(i%2==1 && bits[i]==1) odd++;
        }
        // cout<<endl<<even<<" "<<odd<<endl;
        return {even,odd};
    }
};
