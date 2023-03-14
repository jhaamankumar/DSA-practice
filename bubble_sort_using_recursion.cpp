#include<bits/stdc++.h>
using namespace std;

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    // Base case
    if (n == 1)
        return;
  
    int count = 0;
    // One pass of bubble sort. After
    // this pass, the largest element
    // is moved (or bubbled) to end.
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
            count++;
        }
  
      // Check if any recursion happens or not
      // If any recursion is not happen then return
      if (count==0)
           return;
  
    // Largest element is fixed,
    // recur for remaining array
    bubbleSort(arr, n-1);
}
  
/* Function to print an array */
void printArray(int arr[], int n)
{
    for (int i=0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
}
  

  
int main(){
    int arr[100];
    int n;
    
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubbleSort(arr,n);
    cout<<"Sorted Array"<<endl;
    printArray(arr,n);
    return 0;

}