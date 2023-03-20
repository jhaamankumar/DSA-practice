#include <bits/stdc++.h>

using namespace std;

 

void subsequenceall(string res,string str,int i,vector<string>& ans){

    int n=str.length();

    if(i==n){

        ans.push_back(res);

        return;

    }

    else{

        //Recursion call excluding

        subsequenceall(res,str,i+1,ans);

        //Including

        res.push_back(str[i]);

        subsequenceall(res,str,i+1,ans);

 

    }

}

vector<string> subsequences(string str){

    

    // Write your code here

    vector<string >ans;

    string res = "";

    int i = 0;

    subsequenceall( res , str , i , ans);

    ans.erase(ans.begin());

    return ans;

    

}