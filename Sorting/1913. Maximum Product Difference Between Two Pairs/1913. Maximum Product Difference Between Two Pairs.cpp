class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int s=nums.size();
        int min=1,max=1;
        if(s > 2){
            min = (nums[0]*nums[1]);
            max = (nums[s-1]*nums[s-2]);
            if(min>max){
                return min-max;
            }else{
                return max-min;
            }
        }if(s==2){
            return nums[0]*nums[1];
        }else{
            return nums[0];
        }
    }
};