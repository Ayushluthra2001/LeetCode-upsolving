class Solution {
public:
    int maximumLengthSubstring(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            for(int j=i+1;j<s.length();j++){
                unordered_map<char,int>mapping;
                for(int k=i;k<=j;k++){
                    mapping[s[k]]++;
                }
                int maxi=0;
                for(auto i : mapping){
                    maxi=max(i.second,maxi);
                }
                if(maxi<=2) ans=max(ans,j-i+1); 
            }
        }
        return ans;
    }
};
