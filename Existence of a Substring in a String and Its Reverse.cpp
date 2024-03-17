class Solution {
public:
    bool isSubstringPresent(string s) {
        
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                string temp="";
                for(int k=i;k<=j;k++){
                    temp+=s[k];
                }
                string temp2=temp;
                reverse(temp.begin(),temp.end());
                cout<<temp2<<" "<<temp<<endl;
                if(temp.length() == 2 &&s.find(temp)!=string::npos && s.find(temp2)!=string::npos) return true;
            }
        }
        return false;
    }
};
