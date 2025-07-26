class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
      
       int n = adj.size();
       int vis[n]={0};
       queue<int>q;
       vis[0]=1;
       vector<int>bfs;
       q.push(0);
       while(!q.empty())
       {
           int node = q.front();
           bfs.push_back(node);
           q.pop();
           
           
           for(auto it : adj[node])
           {
               if(!vis[it])
               {
                   vis[it]=1;
                   q.push(it);
               }
           }
       }
        
        return bfs;
    }
};