/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3][3] = {
        {10, 20, 30},
        {30, 50, 60},
        {70, 80, 90}
    };

    for(int row = 0; row < 3; row++) {
        for(int col = 0; col < 3; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    return 0;
} */

/* #include<bits/stdc++.h> 
using namespace std;

void print_array(int arr[][], int row, int col){
    for(int i = 0; i < row; row++) {
        for(int j = 0; j < col; col++) {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int row, col;
    cin >> row;
    cin >> col;
    int arr[row][col];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    print_array(arr);
    
    // print the array
//    for(int i = 0; i < row; i++) {
//         for(int j = 0; j < col; j++) {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int matrix[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

void add(int arr1[3][3], int arr2[3][3], int sum[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void subtract(int arr1[3][3], int arr2[3][3], int sub[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            sub[i][j] = arr1[i][j] - arr2[i][j];
        }
    }
}

void mul(int arr1[3][3], int arr2[3][3], int mul[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            mul[i][j] = arr1[i][j] * arr2[i][j];
        }
    }
}

void transpose(int arr[3][3], int trans[3][3]) {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            trans[i][j] = arr[j][i];
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[][3] = {{5,6,7}, {8, 9, 10}, {3,1,2} };
    int b[][3] = { {1,2,3}, {4,5,6}, {7,8,9} };
    int c[3][3];

    cout << "First matrix: " << endl;
    print_array(a);
    cout <<"Second matrix: " << endl;
    print_array(b);

    int choice;
    do {
        cout << "Choose the matrix operations: "<< endl;
        cout << "----------------------------------" << endl;
        cout << "1.Addition"<< endl;
        cout << "2.Subtraction" << endl;
        cout << "3.Multiplication" << endl;
        cout << "4.Transpose" << endl;
        cout << "5.Exit " << endl;
        cout << "----------------------------" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
         
        switch (choice)
        {
        case 1:
            add(a, b, c);
            cout << "Sum of matrix: " << endl;
            print_array(c);
            break;
        case 2:
            subtract(a, b, c);
            cout << "Subtraction of matrix: " << endl;
            print_array(c);
            break;
        case 3:
            mul(a, b, c);
            cout << "Multiplication of matrix: " << endl;
            print_array(c);
            break;
        case 4:
            cout << "Transpose first matrix: " << endl;
            transpose(a, c);
            print_array(c);
            cout << "Transpose second matrix: " << endl;
            transpose(b,c);
            print_array(c);
        case 5:
            cout << "Thnak you" << endl;
            exit(0);
        default:
            cout << "Invalid input!" << endl;
            cout << "Please Enter the  correct input" << endl;
        
        }
    } while(1);

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void FindMaxMin(int arr[], int size) {
    int max, min;
    max = min = arr[0];
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) max = arr[i];
        else if(arr[i] < min) min = arr[i];
    }
    cout << max << endl;
    cout << min << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int len;
    cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin>> arr[i];

    FindMaxMin(arr, len);
    PrintArray(arr, len);
    return 0;
} */

// find the kth max and min
/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void kthLargest(int arr[], int size, int k) {
    sort(arr, arr+size);
        for(int i = 0; i < k; i++) {
            cout << arr[size-1-i] << " ";
        }

}

void KthSmallest(int arr[], int size, int k) {
    sort(arr, arr+size);
    for(int i = 0; i < k; i++) cout << arr[i] << " ";
}

// kth minimun
// int KthSmallest(int arr[], int size, int k) {
//     sort(arr, arr+size);
//     return arr[k-1];
// }

int main()
{
    ios_base::sync_with_stdio(false);  // use for fast input and output   
    cin.tie(NULL);
    cout.tie(NULL);
    //     int len; cin >>len;
    //     int arr[len];
    //     for(int i = 0; i < len; i++) cin >> arr[i];

    //     //KLargest(arr,len, 3);
    //    cout << KthSmallest(arr, len, 3);

    int arr[] = {1, 23, 12, 9, -30, -2, 50};
    int len = sizeof(arr)/sizeof(arr[0]);

    print_array(arr, len);
    KthSmallest(arr, len, 3);
    cout << endl;
    kthLargest(arr, len, 3);

    return 0;
}
 */

 /* #include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// void ReverseArray(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         cout << arr[size-1-i] << " ";
//     }
// }

// Another way
void ReverseArray(int arr[], int size) {
    int left = 0, right = size-1;
    for(int i = 0; i < size; i++) {
        while(left < right) {
            swap(arr[left++], arr[right--]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int len;
    cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];

    ReverseArray(arr, len);
    PrintArray(arr, len);


    return 0;
} 
 */

/* #include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void kthSmallest(int arr[], int size, int k) {
    sort(arr, arr+size);
    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
}

void kthLargest(int arr[], int size, int k) {
    sort(arr, arr+size);
    for(int i = 0; i < k; i++) {
        cout << arr[size-i-1] << " ";
    }
    cout << "\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int len; cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];

    kthSmallest(arr, len, 4);
    cout << endl;
    kthLargest(arr, len, 3);

    return 0;
}
 */

//sorting 0,1,2 without using sorting algo
/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void SortedArray(int arr[], int size) {
    int zero = 0, one = 0, two = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) zero++;
        else if(arr[i] == 1) one++;
        else two++;
    }
    int k = 0;
    for(int i = 0; i < zero; i++) arr[k++] = 0;
    for(int i = 0; i < one; i++) arr[k++] = 1;
    for(int i = 0; i < two; i++) arr[k++] = 2;
}

int main()
{
    int arr[] = {0, 0, 2, 1, 0, 1, 1, 0, 2, 1, 2, 2, 0 };
    int len = sizeof(arr)/sizeof(arr[0]);

    SortedArray(arr,len);
    print_array(arr,len);


    return 0;
}
 */

/* #include<bits/stdc++.h>
using namespace std;

void PrintArrray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void SortedArray(int arr[], int size) {
    int f = 0, s = 0, t = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) f++;
        else if(arr[i] == 1) s++;
        else t++;
    }

    for(int i = 0; i < f; i++) arr[i] = 0;
    for(int i = f; i < f+s; i++) arr[i] = 1;
    for(int i = f+s; i < f+s+t; i++) arr[i] = 2;
}

int main()
{
    int arr[] = {1, 0, 0, 2, 1, 1, 2, 0, 2, 2, 1};
    int len = sizeof(arr)/sizeof(arr[0]);

    SortedArray(arr, len);
    PrintArrray(arr, len);

    return 0;
}
 */

//sorting 0,1,2  using Dutch algo
/* #include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

// Dutch National Flag Algorithom
void SepeeratedZeroOneTwo(int arr[], int size) {
    int left = 0, mid = 0, right = size-1;
    while(mid <= right) {
            if(arr[mid] == 0) {
                swap(arr[left++], arr[mid++]);
        }
        else if(arr[mid] == 1) {
            mid++;
        }
        else{
            swap(arr[right--], arr[mid]);
        }

    }   
}

int main()
{
    int arr[] = {1, 0, 0, 2, 1, 1, 0, 2, 2, 1, 0};
    int len = sizeof(arr)/sizeof(arr[0]);
    SepeeratedZeroOneTwo(arr, len);
    PrintArray(arr,len);

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void PrintArrray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void SortedZeroOneTwo(int arr[], int size) {
    int left = 0, mid = 0, right = size-1;
    while(mid <= right) {
        if(arr[mid] == 0)
            swap(arr[left++], arr[mid++]);
        else if(arr[mid] == 1) mid++;
        else swap(arr[right--], arr[mid]);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int len; cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];

    SortedZeroOneTwo(arr, len);
    PrintArrray(arr,len);


    return 0;
}
 */

/* #include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int RemoveDuplicate(int arr[], int size) {
    if(size < 2) {
        cout << "Invalid size of array";
    }
    int j = 0;
    for(int i = 0; i < size-1; i++) {
        if(arr[i] != arr[i+1]) {
            arr[j++] = arr[i];
        }
    }
    arr[j++] = arr[size-1];
    return j;

}

int main()
{   
    int arr[] = {1, 2, 2, 3, 3, 4,5, 6, 7, 8};
    int len = sizeof(arr)/sizeof(arr[0]);

    RemoveDuplicate(arr,len);
    PrintArray(arr,len);


    return 0;
}
 */

// C++ program to remove duplicates in-place
 
 












