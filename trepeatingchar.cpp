#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<int> dict(256,-1);
    int maxLn=0,start=-1;
    for(int i=0;i<s.size();i++){
        if(dict[s[i]]>start)
        start=dict[s[i]];
        dict[s[i]]=i;
        maxLn=max(maxLn,i-start);


    }
    cout<<maxLn<<endl;

    return 0;
}