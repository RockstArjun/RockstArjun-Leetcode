int removePalindromeSub(string s) {
        if(s.size()==0) return 0;
        int S=0;
        int E=s.size();
        while(E>S){
            if(s[E-1]!=s[S]) break;
            E--;
            S++;
        }
        if(S>=E) return 1;
        return 2;
    }