class Solution {
public:
    string getSmallestString(string s) {
        string temp = "";
        int prev = -1;
        for(int i=0;i<s.length()-1;i++){
            int curr1 = s[i]-'0';
            int curr2 = s[i+1]-'0';
         //  cout<<curr1<<" "<<curr2<<endl;
            if(((curr1%2==0 && curr2%2==0) || (curr1%2==1 && curr2%2==1)) && curr1>curr2){
              
                    temp  = s;
                    swap(temp[i],temp[i+1]);
                    prev = curr1;
               break;
            }
        }
        
        return temp.length()==0 ? s  : temp;
    }
};
