class Solution {
public:
    void solve(vector<int>&vis,string tiles,string  temp, unordered_map<string,int>&ans){
        
        for(int i=0;i<tiles.size();i++){
            if(vis[i]==0){
                vis[i]=1;
                temp.push_back(tiles[i]);
                ans[temp]++;
                solve(vis,tiles,temp,ans);
                vis[i]=0;
                 temp.pop_back();
            }
        }
    }
    int numTilePossibilities(string tiles) {
        unordered_map<string,int>ans;
        vector<int>vis(tiles.size(),0);
        solve(vis,tiles,"",ans);
        for(auto i : ans){
            cout<<i.first<<" ";
        }
        cout<<endl;
        return ans.size();
    }
};
