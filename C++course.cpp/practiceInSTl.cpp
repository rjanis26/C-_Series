#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n) {
    int l=0, r=n-1;

    while(l < r) {
        if(arr[l] > 0) l++;
        else if(arr[r] < 0) r--;
        else swap(arr[l], arr[r]);
    }
}

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<< arr[i] << " ";
    cout<<endl;
}

int main()
{   
    // int n; cin>>n; 
    // int arr[n];

    // for(int i=0; i<n; i++) 
    //     cin>> arr[i];
    
    // solve(arr, n);
    // print_array(arr,n);
     
    int arr[5] ={1, 3, 2};
    cout<< arr[4];

    return 0;
}