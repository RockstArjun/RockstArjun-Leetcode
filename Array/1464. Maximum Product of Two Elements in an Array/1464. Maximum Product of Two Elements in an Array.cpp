class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int sum=0,n=nums.size();
        sort(nums.begin(),nums.end());
        if( n > 1){
            sum=(nums[n-1]-1)*(nums[n-2]-1);
        }else{
            sum=nums[0];
        }
        return sum;
    }
};