class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int temp=0,sum=0;
        for(int i=0; i<accounts.size();i++){
            for(int j=0 ;j<accounts[i].size();j++){
                temp += accounts[i][j];
            }
            if(temp > sum){
                sum = temp;
            }
            temp =0;
        }
        return sum;
    }
};