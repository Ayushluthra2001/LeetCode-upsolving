class Solution {
public: 
    void solve(vector<int>& temp,int n){
        while(n>0){
            temp.push_back(n%2);
            n=n/2;
        }
        reverse(temp.begin(),temp.end());
    }
    int minChanges(int n, int k) {
        if(n==k) return 0;
        
        vector<int>temp1,temp2;
        
        solve(temp1,n);
        solve(temp2,k);
        if(temp1.size()>temp2.size()){
            int j = temp2.size();
            reverse(temp2.begin(),temp2.end());
            while(j<temp1.size()) {
                temp2.push_back(0);
                j++;
            }
              reverse(temp2.begin(),temp2.end());
        }
        if(temp2.size()>temp1.size()){
            int j = temp1.size();
            reverse(temp1.begin(),temp1.end());
            while(j<temp2.size()) {
                temp1.push_back(0);
                j++;
            }
              reverse(temp1.begin(),temp1.end());
        }
        
        
        // for(auto j : temp2) cout<<j<<" ";
        // cout<<endl;
        
//         int i=0;
//         while(i<temp1.size() && temp1[i]==0) i++;
//         int i=0;
//         while(i<temp2.size() && temp2[i]==0) i++;
        if(temp1.size()>temp2.size()) return -1;
        int count =0;
        for(int i=0;i<temp1.size();i++){
            if(temp1[i] != temp2[i] ){
                if(temp1[i]==0) return -1;
                else count++;
            } 
        }
        return count;
        
    }
};
