class Solution {
public:
    bool iscycle(int src, vector<bool> &vis, vector<bool> &req, vector<vector<int>>& e){
        vis[src] = true;
        req[src] = true;
        for(int i=0; i<e.size(); i++){
            int v = e[i][0];
            int u = e[i][1];
            if(src == u){
                if(!vis[v]){
                    if(iscycle(v,vis,req,e)){
                        return true;
                    }
                    }else if(req[v]){
                        return true;
                    
                }
            }
        }
        req[src] = false;
        return false;
    }
    void top(int src, vector<bool> &vis, stack<int> &s, vector<vector<int>>& e){
        vis[src] = true;
            for(int i=0; i<e.size(); i++){
            int v = e[i][0];
            int u = e[i][1];
            if(src == u){
                if(!vis[v]){
                    top(v,vis,s,e);
                }
    }
    }
    s.push(src);
    }

    vector<int> findOrder(int n, vector<vector<int>>& e) {
        vector<bool> vis(n,false);
        vector<bool> req(n,false);
        vector<int> ans;
        for(int i=0; i<n; i++){
            if(!vis[i]){
                if(iscycle(i,vis,req,e)){
                    return ans;
                }
            }
        }
        stack<int> s;
        vis.assign(n,false);
        for(int i=0; i<n; i++){
            if(!vis[i]){
                top(i,vis,s,e);
            }
        }
        while(s.size()>0){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};