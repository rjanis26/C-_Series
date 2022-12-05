#include<bits/stdc++.h>
#define size 5
using namespace std;
 
int Binar_search(int arr[], int length, int target)
{
    int left = 0;
    int right = length - 1;

    while(left <= right){
        int middle = left + (right - 1)/2;
        
        if (arr[middle] == target){
            return middle;
        }
        else if(arr[middle] < target){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }
    return -1;
}


int main()
{   
    int arr[size] = {1, 5, 7, 9, 11};
    int index = Binar_search(arr, size, 100);

    (index == -1) ? cout<<"Item is not found!!" : cout << "Item is found at index: "<< index<< endl;

    return 0;
}

 