/* #include<bits/stdc++.h>
#define size 5
using namespace std;

int Linear_search(int arr[], int target, int length){
    for(int i = 0; i < length; i++){
        if(arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int arr[size] = {3, 4, 1, 7, 5};
    int index = Linear_search(arr, 7, size);

    (index == -1) ? cout <<"Item is not found!" : cout<<"Item is found at index: " << index << endl;

    return 0;
} */

//Binarysearch...

/* #include<bits/stdc++.h>
#define size 6
using namespace std;

int Binary_search(int arr[], int target, int length){
    int left = 0, right;
    right = length - 1;

    while(left <= right){
        int middle = left + (right - left )/2;
        if (arr[middle] == target)
            return middle;
        else if(arr[middle] < target)
            left = middle + 1;
        else
            right = middle - 1;

    }

    return - 1;
}

int main()
{
    int arr[size] = {1, 3, 5, 7, 9, 40};
    int index = Binary_search(arr, 9, size);

    (index == -1) ? cout<<"Item is not found!" : cout<<"Item is found at index: " << index << endl;
} */

 
/* #include<bits/stdc++.h>
using namespace std;

void solution(){
    int easy,hard, score;
    cin >> score >> easy >> hard;
    int total = (easy + 2*hard);

    if (total >= score){
        cout << "Qualify" << "\n";
    }
    else{
        cout << "NotQualify" << "\n";
    }
}

int main()
{   
    int t;
    cin >> t;
    while(t--) solution();
    // {
    //     cin >> easy >> hard >> score ;
    //     int total = (easy + hard * 2);

    //      if(total >= score)
    //         cout << "Qualify" <<"\n";
    //     else
    //         cout << "NotQualify" <<"\n";
    // }
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    int num1 = 0, num2 = 0, num3 = 0;
    int large = 0;

    while(T--)
    {
        cin >> num1 >> num2 >> num3;

        large = num1;
        if (num2 > large)
            large = num2;
        if(num3 > large)
            large = num3;

        cout << large << endl;
     }
    return 0;
    
}













