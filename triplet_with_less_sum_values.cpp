#include<bits/stdc++.h>
using namespace std;
int tripletSum(int arr[],int n,int sum){
    sort(arr,arr+n);
    int ans=0;
    for(int i=0;i<=n-2;i++){
     int j=i+1; int k=j+1;


        while(j<k){
            if(arr[i]+arr[j]+arr[k]>=sum){
                k--;
            }
            else{
                ans+=(k-j);
                j++;
            }
            
        }
        
    }
    return ans;
}
int main(){
    int arr[10]={1,2,3,2,22,3,2,-1,0,1};
    int n=sizeof arr/sizeof arr[0];
    
   cout<< tripletSum(arr,10,12)<< endl;
    return 0;
}