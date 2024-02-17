class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char,int>mapping;
        unordered_map<char,int>mapping2;
        
        for(int i=0;i<s.length();i++){
                mapping2[s[i]]=i;
                mapping[s[i]]++;   
        }
        int maxi=0;
        for(auto i : mapping){
            maxi=max(i.second,maxi);
        }
        string temp="";
        for(int i=0;i<s.length();i++){
           if(mapping[s[i]]==maxi && mapping2[s[i]]==i){
                temp+=s[i];
            }
        }
        return temp;
    }
};
 
     
