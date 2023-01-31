public:
    int countSubstrings(string s) {
        int ans=0,i=0,n=s.size();
        while(i<n){
            int rep=1;
            while(i<n-1 && s[i]==s[i+1]){// calculating total repeating number
                rep++;
                i++;
            }
            ans+=(rep*(rep+1))/2;

            int k=1;
            if(rep>1){// checking for condition where after and before repeatetion start there is some equal
                      //char like   yx(aaa)xy
                while(i-rep+1-k>=0 && i+k<n && s[i+k]==s[i-rep+1-k]){
                    ans++;
                    k++;
                }
            }
            int p=1;
            while(i-p>=0 && i+p<n && s[i+p]==s[i-p]){//checking for condition where except middle, both left and right are equal
                ans++;
                p++;
            }
            i++;
        }
        return ans;
    }
};