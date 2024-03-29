class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maximumSum = INT_MIN, currSumSubarray = 0;
        for (int i = 0; i < n; i++) {
            currSumSubarray += nums[i]; 
            maximumSum = max(maximumSum, currSumSubarray);
            currSumSubarray = max(currSumSubarray, 0);
        } 
        return maximumSum;
    }
};