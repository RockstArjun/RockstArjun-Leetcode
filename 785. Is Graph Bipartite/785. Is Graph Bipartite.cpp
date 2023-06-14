class Solution {
public:
    bool bfs(int s,vector<int> &color,vector<vector<int>>& graph){
        queue<int> q;
        int node=0;
        q.push(s);
        while(!q.empty()){
            node=q.front();
            q.pop();
            for(auto x:graph[node]){
                if(color[x]==-1){
                    color[x]=!color[node];
                    q.push(x);
                }
                else if(color[x] == color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int> color(graph.size(),-1);
        for(int i = 0; i <graph.size(); i++){
               if(!bfs(i, color, graph))
                return false;
           }
        return true;
    }
};