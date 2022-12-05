/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    string s = "codeses harrry";
    map<char, int> m;
    for(int i = 0; i < s.length(); i++) {
        m[s[i]]++;
    }
    for(auto it : m) {
        if(it.second > 1) {
            cout << it.first <<" " <<"count=" << it.second << endl;
        }
    }
    return 0;
}
 */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void seperate_odd_even(int arr[], int size) {
    int left = 0, right = size -1;
    while(left < right) {
        while(arr[left] % 2 == 1 && left < right) left++;
        while(arr[right] % 2 == 0 && left < right) right--;

        if(left < right) {
            swap(arr[left], arr[right]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[] = {1, 3, 4, 6, 8, 9};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    print_array(arr, len);
    seperate_odd_even(arr, len);
    print_array(arr, len);

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0 ; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void seperate_zero_one(int arr[], int size) {
    int left = 0, right = size-1;
    while(left < right) {
        while(arr[left] == 0) left++;
        while(arr[right] == 1) right--;

        if(left < right) {
            swap(arr[left], arr[right]);
        }
    }
}


int main() 
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(NULL);

    int len;
    cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    //print_array(arr, len);
    seperate_zero_one(arr, len);
    print_array(arr, len);
    
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int find_largest(int arr[], int size) {
    int max = arr[0];
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0) {
            max = arr[i];
        }
    }
    return max;
    
}

void find_minimun(int arr[], int size) {
    int min = arr[0];
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) {
            min = arr[i];
        }
    }
    cout << "Minimum value of array: " << min << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int len;
    cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    print_array(arr, len);
    find_minimun(arr, len);


    return 0;
} */

// Another way to solve this problem
/* #include<bits/stdc++.h>
using namespace std;

void print_arrray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int find_largest(int arr[], int size) {
    return *max_element(arr, arr+size);
}

int find_lowest(int arr[], int size) {
    return *min_element(arr, arr+size);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int size;
    cin >> size;
    int arr[size];
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    //print_arrray(arr, size);
    cout << "Largest: " << find_largest(arr,size) << endl;
    cout << "Lowest: " << find_lowest(arr, size);

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i];
    }
    cout << endl;
}

void findThreeLargest(int arr[], int size) {
    int first, second, third;
    if(size < 3) {
        cout << "Invalid input";
        return;
    }
    
    first = second = third = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second) {
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third) third = arr[i];
    }
    cout << "Three largest: " << first << ", " << second << ", " << third << endl;
}

int main()
{
    ios_base::sync_with_stdio(false); // using for fast input and output...
    cin.tie(NULL);
    cout.tie(NULL);

    int len;
    cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) {
        cin >> arr[i];
    }

    findThreeLargest(arr, len);

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void find_Kth_largest(int arr[], int size, int k) {
    sort(arr, arr+size, greater<int>());
    for(int i = 0; i < k; i++) cout << arr[i] << " ";
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int len;
    cin>> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];
    find_Kth_largest(arr, len, 3);


    return 0;
} */
//seperate Even and Odd value from the array
/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void seperateZeroOne(int arr[], int size) {
    int count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] == 0) count++;
    }
    for(int i = 0; i < count; i++) arr[i] = 0;
    for(int i = count; i < size; i++) arr[i] = 1;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int len;
    cin>> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];
    seperateZeroOne(arr, len);
    print_array(arr, len);

    return 0;
}
 */
//seperate One and Zero from array using Dutch algorithms.
/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void seperateOneZero(int arr[], int size) {
    int left = 0, right = size - 1;
    while(left < right) {
        while(arr[left] == 1) left++;
        while(arr[right] == 0) right--;
        
        if(left < right) {
            swap(arr[left], arr[right]);
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
    seperateOneZero(arr, len);
    print_array(arr, len);
    return 0;
}
 */
//Find the second largest from the array
/*  #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void SecondLargest(int arr[], int size) {
    int first, second;
    if(size < 2) {
        cout << " Opps!Invalid length of array.";
        return;
    }
    first = second = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if(second == INT_MIN) cout << "NO largest element" << "\n";
    else cout << "Second largest: " << second << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int len;
    cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];
    SecondLargest(arr, len);

    return 0;
}
  */

 /* include<bits/stdc++.h>
 using namespace std;

 void print__array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
 }
 
 int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int len;
    cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];
    print__array(arr, len);
 return 0;
 }
 */
 
/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << " ";
}

int remove_dupliacate(int arr[], int size) {
    if(size < 2) {
        cout << "Invalid size of the array";
    }

    int j = 0;
    for(int i = 0; i < size-1; i++) {
        if(arr[i] != arr[i+1])
            arr[j++] = arr[i];
    }
    arr[j++] = arr[size-1];
    return j;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    int len; cin >> len;
    int arr[len];
    for(int i = 0; i <len; i++) cin >> arr[i];
    int new_size = remove_dupliacate(arr, len);
    print_array(arr,new_size);

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

void KthLargest(int arr[], int size, int k) {
    if(size < 2) {
        cout << "Invalid size of array";
    }

    sort(arr, arr+size);
    for(int i = 0; i < k; i++) {
        cout << arr[size-1-i] << " ";
    }
}

void KthSamllest(int arr[], int size, int k) {
    sort(arr, arr+size);
    for(int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int len; cin >> len;
    int arr[len];
    for(int i = 0; i<len; i++) cin >> arr[i];

    KthLargest(arr, len, 3);
    cout<<"\n";
    KthSamllest(arr,len, 3);

    return 0;
}
 */


// Zig-zig array
/* #include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void Zig_ZagArray(int arr[], int size) {
    bool ans = true;
    for(int i = 0; i < size -1; i++) {
        if(ans) {
            if(arr[i] > arr[i+1])
                swap(arr[i], arr[i+1]);
        }
        else {
            if(arr[i] < arr[i+1]) 
                swap(arr[i], arr[i+1]);
        }
        ans = !ans;
    }
}

int main()
{   
    int arr[] = {0, 1, 2, 4, 5, 6, 7, 8, -1};
    int len = sizeof(arr)/sizeof(arr[0]);

    Zig_ZagArray(arr, len);
    printArray(arr, len);

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void ZigzagArray(int arr[], int size) {
    bool ans = true;
    for(int i = 0; i < size-1; i++) {
        if(ans) {
            if(arr[i] > arr[i+1])
                swap(arr[i], arr[i+1]);
        }
        else {
            if(arr[i] < arr[i+1]) 
                swap(arr[i], arr[i+1]);
        }
        ans = ! ans;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int len; cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];

    ZigzagArray(arr,len);
    PrintArray(arr,len);

    return 0;
}
 */

/* #include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int size) {
    for(int i = 0 ; i< size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int maxSubArraySum(int arr[], int size) {
    int max_so_far = INT_MIN, max_ending = 0;
    int start = 0, end = 0, s = 0;
    for(int i = 0; i < size; i++) {
        max_ending += arr[i];
        if(max_so_far < max_ending) 
            max_so_far = max_ending;
            start = s; end = i;
        if(max_ending <  0) 
            max_ending = 0;
            s = i+1;
    }
    return max_so_far;
}

int main()
{
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int len = sizeof(arr)/sizeof(arr[0]);

    // int max_sum = maxSubArraySum(arr, len);
    // cout << max_sum << endl;
    cout << maxSubArraySum(arr, len);
    

    return 0;
} */
/* #include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int maxsumSubArray(int arr[], int size) {
    int max_first = INT_MIN, max_end = 0;
    for(int i = 0; i < size; i++) {
        max_end += arr[i];
        if(max_first < max_end)
            max_first = max_end;
        if(max_end < 0)
            max_end = 0;
    }
    return max_first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int len; cin>> len;
    int arr[len];
    for(int i = 0; i<len; i++) cin >> arr[i];

    // int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    // int len = sizeof(arr)/sizeof(arr[0]);

    int maxsum =  maxsumSubArray(arr, len);
    cout << maxsum << endl;

    return 0;
}
 */

/* #include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int deleteElement(int arr[], int n, int item) {
    int i;
    for(i = 0; i < n; i++) {
        if(arr[i] == item) 
            break;
    }

    if(i < n) {
        n = n-1;
        for(int j = i; j < n; j++) {
            arr[j] = arr[j+1];
        }
    }
    return n;
}

int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int len = sizeof(arr)/sizeof(arr[0]);

    int item =  8;
    
    printArray(arr, len);
    len = deleteElement(arr, len, item);

    printArray(arr,len);
    return 0;
}
 */

/* #include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    puts(" ");
}

int deleteElement(int arr[], int size, int item) {
    // search item in array to delete
    int i;
    for(i = 0; i < size; i++) {
        if(arr[i] == item) 
            break;
    }

    //if x is found
    if(i < size) {
        size = size -1; // resuce size of arr[]
        for(int j = i; j < size; j++) {
            arr[j] = arr[j+1];
        }
    }
    return size;
}

int main()
{       
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int len;
    cin>> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];
    int item;
    cin >> item;

    len = deleteElement(arr, len, item);
    printArray(arr,len);
    
    return 0;
}
 */

/* #include<bits/stdc++.h>
using namespace std;

void displayArray(int arr[], int size) {
    for(int i = 0; i < size ; i++) {
        cout << arr[i] << " ";
    }
    cout<< "\n";
}

int deleteElement(int arr[], int size, int item) {
    int i;
    for(i = 0; i < size; i++) 
        if(arr[i] == item) 
            break;
    
    if(i < size) {
        size = size -1;
        for(int j = i;  j < size; j++) {
            arr[j] = arr[j+1];
        }
    }
    return size;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int len; cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];
    
    int item;
    cin >> item;

    len = deleteElement(arr, len, item);
    displayArray(arr, len);

    return 0;
}
 */

/* #include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort_array(int arr[], int size) {
    for(int i = 0; i < size-1; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] > arr[j]) 
                swap(arr[i], arr[j]);
        }
    }
}

// void Reverse_array(int arr[], int size) {
//     for(int i = 0; i < size; i++) {
//         cout << arr[size-i-1] << " ";
//     }
// }

void Reverse_array(int arr[], int length) {
    int left = 0, right = length-1;
    while(left < right) {
        swap(arr[left++], arr[right--]);
    }
}  

int main()
{   
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int len; cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];

    sort_array(arr, len);
    printArray(arr, len);
    Reverse_array(arr, len);
    printArray(arr, len);
    return 0;
}
 */

#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout<< arr[i] << " ";

    cout << "\n";
}

void solve(int arr[], int n) {

    for(int i=0; i<n; i++) {
        if(i%2==0 and arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);
        
        if(i%2 ==1 and arr[i] < arr[i+1]) 
            swap(arr[i], arr[i+1]);
    }
        
}       

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];

    solve(arr,n);
    print_array(arr,n);
 
    return 0;
}
































