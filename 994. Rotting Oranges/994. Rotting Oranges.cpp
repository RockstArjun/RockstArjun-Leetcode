class Solution {
public:

    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<vector<int>> vis(rows,vector<int>(cols,0));
        
        queue<pair<pair<int,int>, int>> q;
        int t = 0; 
    
        for(int i=0; i<rows;i++){
            for(int j = 0;j<cols;j++){
                if(grid[i][j]==2)
                {
                    q.push({{i,j},t});
                    vis[i][j]=2;
                }
            }
        }
        int tm = 0;
        int delrow[] = {-1,0,1,0};
        int delcol[] = {0,-1,0,1};

        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            q.pop();
            tm = max(tm,t);
            for(int i =0;i<4;i++){
                int drow = r + delrow[i];
                int dcol = c + delcol[i];
                if(drow>= 0 && drow<rows && dcol>=0 && dcol<cols && 
                grid[drow][dcol]==1 && vis[drow][dcol]==0){
                    q.push({{drow,dcol},t+1});
                    vis[drow][dcol]=2;
                }
            }

        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(vis[i][j]!=2 && grid[i][j]==1) return -1;
            }
        }
        return tm;
    }
};