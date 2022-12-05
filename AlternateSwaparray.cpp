#include<bits/stdc++.h>
using namespace std;

void swap_alternative(int arr[], int size){
    
    if(size <= 1) return;
    for(int i = 0; i < size; i += 2){
        if(i + 1 < size){
            swap(arr[i], arr[i+1]);
        }
    }    
}

void print_array(int arr[], int size){

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int even[8] = {1, 3, 5, 7, 9, 11, 13, 19};

    cout << "Orginal array: " << endl;
    print_array(even, 8);
    
    cout << "After swapping of the array: " << endl;
    swap_alternative(even,8);
    print_array(even, 8);

    return 0  ;  
}
