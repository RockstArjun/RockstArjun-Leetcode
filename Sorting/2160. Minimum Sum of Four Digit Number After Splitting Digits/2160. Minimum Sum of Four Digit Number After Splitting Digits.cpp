class Solution {
public:
    int minimumSum(int num) {
        vector<int> arjun;
        int result;
       while(num>0){
           arjun.push_back(num%10);
           num/=10;
       }  
       sort(arjun.begin(),arjun.end());
        result= (((arjun[0]*10)+arjun[3]) + ((arjun[1]*10)+arjun[2]));
        return result;
    }
};