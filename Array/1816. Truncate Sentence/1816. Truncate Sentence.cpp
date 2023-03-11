class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans="";
        int v=0;
        for(int i=0;i<s.length();i++){
            if(s[i] == ' '){v++;}
            if(v == k || (i+1) == s.length()){
                if(i+1 == s.length()){
                    ans += s[i];
                }
                break;
            }
            ans += s[i];
        }
        return ans;
    }
};