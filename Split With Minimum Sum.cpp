class Solution {
public:
    int splitNum(int num) {
        string temp=to_string(num);
        
        sort(temp.begin(),temp.end());
        string s1="",s2="";
        for(int i=0;i<temp.length();i+=2){
            s1+=temp[i];
        }
        int num1= s1.length()>0 ? stoi(s1) :0 ;
        for(int i=1;i<temp.length();i+=2){
            s2+=temp[i];
        }
        int num2=s2.length()>0 ? stoi(s2) : 0 ;
        return num1+num2;
    }
};
