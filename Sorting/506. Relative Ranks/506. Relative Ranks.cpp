class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<pair<int,int>> temp;
        for(int i=0;i<n;i++){
            temp.push_back({score[i],i});
        }
        sort(temp.begin(),temp.end());
        reverse(temp.begin(),temp.end());
        vector<string> ans(n);
        ans[temp[0].second]="Gold Medal";
        if(n==1)return ans;
        ans[temp[1].second]="Silver Medal";
        if(n==2)return ans;
        ans[temp[2].second]="Bronze Medal";
        if(n==3)return ans;
        for(int i=3;i<n;i++){
            ans[temp[i].second]=to_string(i+1);
        }
        return ans;
    }
};