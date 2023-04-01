class Solution {
public:
    int maximumCostSubstring(string s, string chars, vector<int>& vals) {
        unordered_map<char,int>values;
        for(int i=0;i<chars.length();i++){
            values[chars[i]]=vals[i];
        }
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<s.length();i++){
            if(values.find(s[i])==values.end()){
                sum+=s[i]-'a' + 1;
                
            }else{
                sum+=values[s[i]];
            }
            if(sum<0){
                sum=0;
            }else{
                maxi=max(maxi,sum);
            }
        }
        return maxi == INT_MIN ? 0 : maxi;
    }
};
