class Solution {
    private:
         void dfs(int node,vector<int> &ans,vector<int> adj[],int vis[])
          {
        vis[node] = 1;
        ans.push_back(node);

        for(auto it: adj[node])
        {
            if(!vis[it])
            {
                dfs(it,ans,adj,vis);
            }
        }
    }
  public:
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        
        vector<int> ans;
        int vis[V] = {0};
         for(int i=0;i<V;i++){
             if(!vis[i]){
               dfs(i,ans,adj,vis);
             }
         }
        return ans;
    }
};
//  private:
//       void dfs(int node, vector<int>adj[],int vis[], vector<int>&ans[]){
//          vis[node]=1;
//          ans.push_back(node);
         
//          for(auto it: adj[node]){
//              if(!vis[it]) dfs(it,adj,vis,ans);
//          }
//       }
//   public:
//     // Function to return a list containing the DFS traversal of the graph.
//     vector<int> dfsOfGraph(int n, vector<int> adj[]) {
//       int vis[n]={0};
//       vector<int>ans;
//     //   for(int i=0;i<n;i++){
//     //       if(!vis[i]) dfs(i,adj,vis,ans);
//     //   }
//       dfs(0,adj,vis,ans);
//       return ans;
//     }