
#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[], int n) {
    
    int min_index;
    for(int i=0; i<n-1; i++) {
        min_index=i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min_index])   
                min_index = j;

            swap(arr[min_index], arr[j]);
        }
    }
}

void print_array(int arr[], int n) {

    for(int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }
    cout<<"\n";
}


int main()
{   
    int n; cin>>n;
    int arr[n];
    
    for(int i=0; i<n; i++) 
        cin>>arr[i];

    selection_sort(arr, n);
    print_array(arr,n);

    return 0;
}