#include<bits/stdc++.h>
using namespace std;
void sayDigits(long long n,string arr[]){
    if(n==0){
        return;
    }
    long long digit=n%10;
     n=n/10;
    sayDigits(n,arr);
    cout<<arr[digit]<<"\n";
}
int main(){
    long long n;
    cout<<"Enter the number"<<endl;
    cin>>n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    sayDigits(n,arr);

    return 0;
}