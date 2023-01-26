#include<bits/stdc++.h>
using namespace std;
class solution{
    public
    boolean ispalindrome(string s){
        s=s.toLowerCase();
        StringBuilder b=new StringBuilder();
        if(Character.isDigit(s.charAt(i)) || Character.isLetter(s.charAt(i))){
            b.append(s.charAt(i));

        }
    }
    int n=b.length()-1;
    for(int i=0;i<b.length()/2;i++){
        if(b.charAt(i)!=b.charAt(n-1))
        return false;
    }return true;

}
