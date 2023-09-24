class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count=0;
        for(auto i : s){
            if(i=='1') count++;
        }
        
        string temp="";
        
        for(int i=0;i<s.length();i++){
            if(i<count-1) temp.push_back('1');
            else temp.push_back('0');
        }
        temp[temp.length()-1]='1';
        return temp;
    }
};
