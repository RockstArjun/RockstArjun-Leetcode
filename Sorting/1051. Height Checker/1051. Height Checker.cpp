class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> check;
        check = heights;
        int height=0;
        sort(check.begin(),check.end());
        for(int i=0;i<heights.size();i++){
            if(check[i] != heights[i]){
                height++;
            }
        }
        return height;
    }
};