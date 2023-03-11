class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        for(auto &v:grid){
            sort(v.begin(), v.end());
        }
        sort(grid.begin(), grid.end());
        int m=grid.size();
        int n=grid[0].size();
        int sum=0,temp=0;
        for(int i=n -1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(temp < grid[j][i] ){temp = grid[j][i];};
            }
            sum += temp;
            temp=0;
        }
        return sum;
    }
};