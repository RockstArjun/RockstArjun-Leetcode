class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int goodPairs =0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i != j){
                    if(nums[i] == nums[j]){goodPairs++;}
                }
            }
        }
        return goodPairs/2;
    }
};