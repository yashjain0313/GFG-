class Solution {
    void solve(vector<int>&dfs,vector<vector<int>>& adj,vector<int>&vis,int start){
        vis[start]=1;
        dfs.push_back(start);
        for(auto adjacent:adj[start]){
            if(vis[adjacent]!=1){
                solve(dfs,adj,vis,adjacent);
            }
        }
        return ;
    }
  public:
    vector<int> dfs(vector<vector<int>>& adj) {
     int v = adj.size();
     vector<int>dfs;
     vector<int>vis(v,0);
     solve(dfs,adj,vis,0);
     return dfs;
    }
};