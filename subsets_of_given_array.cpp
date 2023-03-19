#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> subsets;

void generate(vector<int> &nums,int index,vector<int> &subset){
    //basecase
    if(index==nums.size()){
        subsets.push_back(subset);
        return;
    }
    //include
    subset.push_back(nums[index]);
    generate(nums,index+1,subset);
    subset.pop_back();

    //exclude
    generate(nums,index+1,subset);
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> empty;
    generate(nums,0,empty);
    for(auto subset:subsets){
        for(auto ele:subset){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}