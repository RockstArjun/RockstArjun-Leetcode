class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element=0,digit=0;
        for(auto &x:nums){
            element += x;
            while(x > 0){
                digit += x%10;
                x /= 10;
            }
        }
        return (element-digit);
    }
};