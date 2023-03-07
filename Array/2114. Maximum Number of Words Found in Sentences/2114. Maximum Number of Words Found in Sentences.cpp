class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int temp=0 , sum=0;
        for(int i=0;i<sentences.size();i++){
            for(int j=0;j<sentences[i].size();j++){
                if(sentences[i][j] ==' ' && sentences[i][j+1] !=' '){
                    temp++;
                }
            }
            if(temp > sum){
                sum=temp;
            }
            temp=0;
        }
        return sum+1;
    }
};