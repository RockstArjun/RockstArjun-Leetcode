class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> temp;
        for(auto x:nums){
            if(x%2 == 0){
                temp.push_back(x);
            }
        }
        for(auto x:nums){
            if(x%2 != 0){
                temp.push_back(x);
            }
        }
        return temp;
    }
};