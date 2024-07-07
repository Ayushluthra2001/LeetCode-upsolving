class Solution {
public:
    void  solve(vector<string>& substrings,string temp,int index , int n){
        if(index>=n) {
            substrings.push_back(temp);
            return ;
        }
        solve(substrings,temp+"0",index+1,n);
        solve(substrings,temp+"1",index+1,n);
    }
    vector<string> validStrings(int n) {
        vector<string>ans;
        if(n==1){
            return {"0","1"};
        }
        vector<string>substrings;
        solve(substrings,"",0,n);
        
        for(auto i : substrings) {
            string temp =i;
            //cout<<i<<" ";
            if(temp.length()==1)
             ans.push_back(i);
            else {
                int j=0;
                bool flag=true;
                while(j<temp.length()-1){
                    if(temp[j]=='0' && temp[j+1]=='0'){
                        flag=false;
                        break;
                    
                    }
                    j++;
                }
                //cout<<flag<<endl;
                if(flag) ans.push_back(i);
            }
        }
       // cout<<endl;
        return ans;
        
    }
};
