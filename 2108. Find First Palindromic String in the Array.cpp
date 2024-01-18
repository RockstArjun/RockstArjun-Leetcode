string firstPalindrome(vector<string>& words) {
        for(auto x:words){
            int S=0;
            int E=x.size();
            while(E>S){
                if(x[S]!=x[E-1]){
                    break;
                }
                E--;
                S++;
            }
            if(S>=E){
                return x;
            }
        }
        return "";
    }