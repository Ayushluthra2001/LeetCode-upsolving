class Solution {
public:
    string convertDateToBinary(string date) {
        int i =0;
        string ans = "";
        while(i<date.length()){
            int j = i;
            string temp = "";
            while(j<date.length() && date[j]!='-') temp+=date[j] , j++;
            int x = stoi(temp);
            string y = "";
            while(x > 0){
                y+= to_string(x%2);
                x/=2;
            }
            i = j+1;
            
            string y2 = "";
            
            
            reverse(y.begin(),y.end());
            ans += y + '-';
        }
        
        string ans2 = "";
        int k = 0;
        
        while(k < ans.length()-1){
            int b = k;
            string x = "";
            while(b<ans.length()-1 && ans[b]=='0') b++;
            while(b<ans.length()-1 && ans[b]!='-') x+=ans[b++];
            ans2+=x;
            ans2+='-';
            k = b+1;
        
        }
        ans2.pop_back();
        return ans2;
        
    }
};
