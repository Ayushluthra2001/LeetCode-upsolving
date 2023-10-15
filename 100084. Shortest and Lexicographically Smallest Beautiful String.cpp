class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
       
        string ans="";
        int mini=INT_MAX;
        vector<string>temp2;
        for(int i=0;i<s.length();i++){
            int count=0;
            string temp="";
            for(int j=i;j<s.length();j++){
                temp+=s[j];
                if(s[j]=='1') count++;
                
                if(count==k && mini>=temp.length()) {
                    
                    mini=temp.length();
                    temp2.push_back(temp);
                    // vector<string>temp2;
                    // temp2.push_back(temp);
                    // temp2.push_back(ans);
                    // sort(ans.begin(),ans.end());
                    // ans=temp2[0];
                }
                
            }
        }
        
        vector<string>temp3;
        
        
        for(auto i : temp2){
            if(i.length()==mini) temp3.push_back(i);
        }
        
        sort(temp3.begin(),temp3.end());
        if(temp3.size()>=1)
        ans=temp3[0];
        return ans;
    }
};
