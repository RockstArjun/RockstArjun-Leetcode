class Solution {
public:
    int fillCups(vector<int>& a) {
        int timer=0;
        while(true){
            sort(a.begin(),a.end());
            if(a[2]>0){
                a[2]--;
                timer++;
            }
            if(a[1]>0){a[1]--;}
            else if(a[2]==0){break;}
        }
        return timer;
    }
};