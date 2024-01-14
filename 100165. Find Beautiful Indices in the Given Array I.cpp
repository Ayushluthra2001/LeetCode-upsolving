class Solution {
public:
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        vector<int>indicies;
        vector<int>in2;
        for(int i=0;i<s.length() ;i++){
            int curr=i;
             string sub2="";
            
            if(curr+b.length()-1<s.length())
             sub2=s.substr(curr,b.length());
            if(sub2==b) in2.push_back(curr);
        }
        for(int i=0;i<s.length();i++){
            int curr=i;
             string sub="";
            if(curr+a.length()-1<s.length())
            sub=s.substr(curr,a.length());
             
            if(sub==a) indicies.push_back(curr);
            
        }
        vector<int>ans;
        for(int i=0;i<indicies.size();i++){
         bool flag=false;
            for(int j=0;j<in2.size();j++){
             
             if(abs(indicies[i]-in2[j])<=k && !flag) {ans.push_back(indicies[i]);
            flag=true;
                                                     }
                if(flag) break;
         }   
        }
        return ans;
    }
};
