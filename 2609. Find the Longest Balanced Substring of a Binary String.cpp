class Solution {
public:
    int findTheLongestBalancedSubstring(string s) {
        int maxCount=0;
        for(int i=0;i<s.length();i++){
            for(int j=i;j<s.length();j++){
                string temp="";
                for(int k=i;k<=j;k++){
                    temp+=s[k];
                }
                int countZero=0;
                int i=0;
                bool check=true;
                int countOne=0;
                while(i<temp.length()){
                    if(temp[i]-'0'==0) countZero++;
                    else break;
                    i++;
                }
                while(i<temp.length()){
                    if(temp[i]-'0'==1) countOne++;
                    else{
                        check=false;
                        break;
                    }
                    i++;
                }

                if(check && countZero!=0 && countZero==countOne) {
                    maxCount=max(maxCount,countZero+countOne);
                }

            }
        }
        return maxCount;
    }
};
