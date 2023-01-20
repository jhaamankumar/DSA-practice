#include<bits/stdc++.h>
using namespace std;


int findKthLargest(vector<int>& arr, int k) {

        sort(arr.begin(), arr.end());

        int n = arr.size();

        return arr[n-k];

}

int main(){

    vector<int> arr{5,7,8,9,54,3,2,4,10};

    cout<<findKthLargest(arr, 5);

    return 0;
}