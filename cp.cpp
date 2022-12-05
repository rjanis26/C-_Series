#include<bits/stdc++.h>
using namespace std;

void swap_alternate(int arr[], int size) {

    for(int i = 0; i < size; i++) {
        if(i + 1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }
}

void print_array(int arr[], int size) {

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{   
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    int even[5] = {1, 2, 5, 6, 8};
    cout << "Orginal array: ";
    print_array(even, 5);

    cout << "After swaping: ";
    swap_alternate(even, 5);
    print_array(even, 5);

    return 0;
}