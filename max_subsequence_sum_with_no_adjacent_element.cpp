#include<bits/stdc++.h>
using namespace std;
int FindMaxSum(int arr[],int n){
    int incl=arr[0];
    int excl=0;
    int excl_new;
    
    for(int i=0;i<n;i++){
        excl_new=(incl>excl)?incl:excl;
        incl=excl+arr[i];
        excl=excl_new;

    }
    return ((incl>excl)?incl:excl);
}
int main() {
    int arr[]={1,2,34,53,234,23,3};
   cout<< FindMaxSum(arr,7)<<endl;

}