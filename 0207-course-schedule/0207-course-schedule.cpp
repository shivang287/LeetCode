class Solution {
public:

    bool iscycle(int src, vector<bool> &vis, vector<bool> &req,vector<vector<int>>& e){
        vis[src]=true;
        req[src]=true;
        for(int i=0; i<e.size();i++){
            int v = e[i][0];
            int u = e[i][1];
            if(u == src){
                if(!vis[v]){
                    if(iscycle(v,vis,req,e)){
                        return true;
                    }}else if(req[v]){
                        return true;
                    }
                }
            }
        req[src] = false;
        return false;
        }
        
    
    bool canFinish(int n, vector<vector<int>>& e) {
        vector<bool> vis(n,false);
        vector<bool> req(n,false);
        for(int i=0; i<n; i++){
            if(!vis[i]){
                if(iscycle(i,vis,req,e)){
                    return false;
                }
            }
        }
        return true;
    }
};