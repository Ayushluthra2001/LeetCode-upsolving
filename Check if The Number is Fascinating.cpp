class Solution {
public:
    bool isFascinating(int n) {
        unordered_map<int,int>mapping;
        string n1=to_string(n);
        string n2=to_string(n*2);
        string n3=to_string(n*3);
        for(int i=0;i<n1.length();i++){
            mapping[n1[i]-'0']++;
        }
        for(int i=0;i<n2.length();i++){
            mapping[n2[i]-'0']++;
        }
        for(int i=0;i<n3.length();i++){
            mapping[n3[i]-'0']++;
        
        }
        
        for(int i=1;i<=9;i++){
            if(mapping.find(i)==mapping.end() || mapping[i]!=1 ) return false;
        }
        return true;
        
    }
};
