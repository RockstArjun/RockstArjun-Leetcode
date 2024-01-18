string makeSmallestPalindrome(string str) {
        string s=str;
        int S=0;
        int E=s.size();
        while(E>S){
            if(s[S]!=s[E-1]){
                char c=min(s[S],s[E-1]);
                if(c==s[S]){
                    s[E-1]=c;
                }else{
                    s[S]=c;
                }
            }
            E--;
            S++;
        }
        return s;
    }