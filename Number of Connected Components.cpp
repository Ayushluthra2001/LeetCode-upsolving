class Solution {
  public:
  void dfs(int parent , unordered_map<int,vector<int>>&adj, vector<bool>&visited){
        if(visited[parent] == true) return;
        visited[parent] = true;

        for(auto i : adj[parent]){
            
            if(visited[i] == false)
            dfs(i,adj,visited);
        }

    }
    int countConnected(int V, vector<vector<int>>& edges) {
        // code here
        unordered_map<int,vector<int>>adj;
        int n = edges.size();
        vector<bool>visited(V,0);
        
        int count = 0;
        for(int i =0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        

        for(int i = 0; i<V; i++){
            
            if(visited[i] == false){
                count++;
                   
                // dfs(parent,adj, visited)
                dfs(i,adj,visited);
            }
        }

        // for(auto i : visited) cout<<i<<" ";
        // cout<<endl;

        return count;
    }
};
