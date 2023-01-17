#include<iostream>
using namespace std;
int maxSubarray(int arr[],int size){
    int sum=0;
    int maxi=INT_MIN;

    for(int i=0;i<size;i++){
        sum=sum+arr[i];
        maxi=max(maxi,sum);

        if(sum<0){
            sum=0;
        }
    }
    return maxi;
}
int main(){
    int n;
    cin>>n;
    int num[100];
    for(int i=0;i<n;i++){
        cin>>num[i];
    }




    cout<<"maxi is"<<maxSubarray(num,n)<<endl;


    return 0;
}

