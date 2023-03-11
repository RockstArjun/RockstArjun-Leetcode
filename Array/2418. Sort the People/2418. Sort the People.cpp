class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       vector<pair<int,string>> temp;
       for(int i=0;i<heights.size();i++){
           temp.push_back(make_pair(heights[i],names[i]));
       }
       sort(temp.rbegin(),temp.rend());
       for(int i=temp.size()-1;i>=0;i--){
           names[i] = temp[i].second;
       } 
       return names;
    }
};