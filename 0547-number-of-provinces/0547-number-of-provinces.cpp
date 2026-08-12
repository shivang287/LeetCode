class Solution {
public:
    void d(int i, vector<vector<int>>& adj, vector<bool> &vis){
        vis[i] = true;
        for(int j=0;j<adj[i].size();j++){
            if(adj[i][j]==1 && !vis[j]){
                d(j,adj,vis);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int ans = 0;
        int n = isConnected.size();
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++){
            if(!vis[i]){
                d(i,isConnected,vis);
                ans++;
            }
        }
        return ans;
    }
};