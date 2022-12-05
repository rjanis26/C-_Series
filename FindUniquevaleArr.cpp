#include<bits/stdc++.h>
using namespace std;

int find_unique(int arr[], int size){

    int ans = 0;
    for(int i = 0; i < size; i++){
        ans = ans^arr[i];  // this is bitwise operator .its call XOR  it's return only unique value..  

    }
    return ans;
}

void print_array(int arr[], int size){
    
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);  // use for fast input and output....

    int arr[5] = {1, 3, 5, 3, 1};

    cout <<"Orginal array: " << endl;
    print_array(arr, 5);
    int result = find_unique(arr, 5);
    cout << result << endl;


    return 0;
}