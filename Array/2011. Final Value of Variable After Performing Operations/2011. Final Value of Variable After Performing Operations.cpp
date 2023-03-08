class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int X=0;
        for(auto x:operations){
            if(x == "--X"){--X;}
            if(x == "X--"){X--;}
            if(x == "++X"){++X;}
            if(x == "X++"){X++;}
        }
        return X;
    }
};