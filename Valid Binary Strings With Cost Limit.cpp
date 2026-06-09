class Solution {
public:
    void solve(int n, int k , string temp , 
    int currSum , vector<string>& ans, int length, bool one){
        if(length > n) return ;

        if(length == n && currSum <=k){
            ans.push_back(temp);
            return;
        }

        solve(n, k , temp + '0' , currSum , ans , length+1, false);

        if(!one)solve(n , k , temp + '1' , currSum+length, ans , length + 1 ,true);

        return;
}
    vector<string> generateValidStrings(int n, int k) {
        vector<string>ans;


        solve(n , k , "" , 0,ans,0,false);

        return ans;
    }
};
