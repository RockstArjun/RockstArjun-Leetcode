class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans(candies.size());
        vector<int> temp(candies.size());
        for(int i=0;i<candies.size();i++){
            temp[i] = candies[i] + extraCandies;
        }
        for(int i=0;i<candies.size();i++){
            for(int j=0;j<candies.size();j++){
                ans[i] = true;
                if(temp[i] < candies[j]){
                    ans[i] = false;
                    break;
                }
            }

        }
        return ans;
    }
};