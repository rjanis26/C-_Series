

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void one_side_negative(int arr[], int size) {
    int i = -1;
    //int pivot = 0;
    for(int j = 0; j < size; j++) {
        if(arr[j] < 0) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {1, 3, -2, 5, -5, 8, -1};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Orginal array: ";
    print_array(arr, len);
    cout << endl;
    
    one_side_negative(arr, len);
    cout << "After sorting: ";
    print_array(arr, len);

    return 0;
/* }  */

//move All Negative One Side.
//   #include <iostream>
// using namespace std;

/* // Using Dutch National Flag Algorithm.
void reArrange(int arr[],int n){
	int low =0,high = n-1;
	while(low<high){
	if(arr[low]<0){
		low++;
	}else if(arr[high]>0){
		high--;
	}else{
		swap(arr[low],arr[high]);
	}
	}
}
void displayArray(int arr[],int n){
for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
}
cout<<endl;
}
int main() {
	// Data
	int arr[] = {1, 2, -4, -5, 2, -7, 3, 2, -6, -8, -9, 3, 2, 1};
	int n = sizeof(arr)/sizeof(arr[0]);
	reArrange(arr,n);
	displayArray(arr,n);
	return 0;
} */
  

// move all negative int to end position...

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void moveNegative_toEnd(int arr[], int size) {
    
    int new_arr[size];
    int j = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] >= 0)
         new_arr[j++] = arr[i];
    }

    for(int i = 0; i < size; i++) {
        if(arr[i] < 0) 
        new_arr[j++] = arr[i];
    }

    for(int i = 0; i < size; i++) 
    cout << new_arr[i] <<" ";
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int arr[] = {1, 3, -4, 2, -5, 6, 9, -1, 10};
    int len = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    cout << endl;

    moveNegative_toEnd(arr, len);

    return 0;
} */

// find the first and last occurrence from sorted array...

/* #include<bits/stdc++.h>
using namespace std;

int first(int arr[], int size, int item) {
    int low = 0, high = size - 1, result = -1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(arr[mid] > item)
            high = mid - 1;
        else if(arr[mid] < item)
            low = mid + 1;

        else {
            result = mid;
            high = mid - 1;
        }
    }
    return result ;
}

int last (int arr[], int size, int item) {
    int low = 0, high = size - 1, result = -1;
    while(low <= high) {
        int mid = low + (high - low)/2;
        if(arr[mid] > item)
            high = mid - 1;
        else if(arr[mid] < item)
            low = mid + 1;

        else {
            result = mid;
            low = mid + 1;
        }
    }
    return result ;
}


void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

int main()
{   
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Orgial array: ";
    print_array(arr, len);
    cout << endl;
    
    cout <<"First occourence of 5 at index: "<< first(arr, len, 5) << endl;
    cout <<"Last occourence of 5 at index: " << last(arr, len, 5) << endl;

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

int count_rotations(int arr[], int size) {
    int min = arr[0], min_index;
    for(int i = 0; i < size; i++) {
        if(min > arr[i]) {
            min =  arr[i];
            min_index = i;
        } 
    }
    return min_index;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int arr[] = {1, 2, 3, 5, 6, 7 , 9, 10};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout << "Orginal array: ";
    print_array(arr, len);
    cout << endl;

    cout <<"Output: " << count_rotations(arr, len);
    



    return 0;
}
 */ 

// array pairs whose are numbers..

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

int pairs_count(int arr[], int size, int sum) {
    int count = 0;
    for(int i = 0; i <size; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] + arr[j] == sum) {
                count++;
            }
        }
    }
    return count;
}
 
int main()
{   
    int arr[] = {4, 2, 3, 5, 1, 3, 8};
    int len = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    cout << endl;
    int sum = 6;

    cout << "Total count: " << pairs_count(arr, len, sum) << endl;
    return 0;
}
  */

// return pairs sum...
/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void pairs_sum(int arr[], int size, int sum) {
    for(int i = 0; i < size; i++) {
        for(int j = i+1;  j < size; j++) {
            if(arr[i] + arr[j] == sum) {
                 cout << "[" << arr[i] << ", " << arr[j] << "]" << endl;
            }
        }
    }
    
}

int main()
{   
    int arr[] = {4, 2, 3, 5, 1, 3, 8};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<< "Orginal array: ";
    print_array(arr, len);
    cout << endl;
    int sum = 6;
    pairs_sum(arr, len, sum);


    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void max_difference(int arr[], int size) {
    int max_diff = 0;
    for(int i = 0; i < size; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[j] - arr[i] > max_diff) 
            max_diff = arr[j] - arr[i];
        }
    }
    cout << "Max Difference: " << max_diff << endl;
}

int main(void)
{   
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int arr[] = {1, 3, 5, 10, 11, 15, 2};
    int len = sizeof(arr)/sizeof(arr[0]);

    print_array(arr, len);
    cout << endl;
    max_difference(arr, len);
}
 */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int  size) {
    for(int i = 0; i <size; i++) cout << arr[i] << " ";
}

void second_largest(int arr[], int size) {
    int first, second;
    first = second = arr[0];
    for(int i = 0; i <size; i++) {
        if(arr[i] > first) {
            first = arr[i];
        }
        if (arr[i] > second) {
            second = arr[i];
        }
    }
    cout << "First largest: " << first << endl;
    cout << "Second largest: " << second << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int arr[] = {1, 2, 5, 8, 10, 20, 50, -6, 60};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout << "Orginal array: ";
    print_array(arr, len);
    cout << endl;

    second_largest(arr, len);


    return 0;
}
 */

//Kth_largest element from the array...

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void second_largest(int arr[], int size) {
    int first, second;
    if(size < 2) cout << "Invalid input!" << endl;

    first = second = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > first) { 
        second = first; 
        first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        second = arr[i];
        
    }
    if(second == INT_MIN) cout<< "No second largest element" << endl;
    else cout << "Second largest: " << second<<endl;

}

int main()
{   
    int arr[] = {1, 3, 5, 6, 2, 10, 5, 9, -4, 2};
    int len = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    cout << endl;
    second_largest(arr, len);
    
    return 0;
} */


/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void Kth_largest(int arr[], int size, int k) {
    sort(arr, arr+size, greater<int>());
    cout << "largest " << k << "Element: ";
    for(int i = 0; i < k; i++) cout << arr[i] << " ";
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int arr[] = {4, 5, 9, 12, 9, 22, 45, 7};
    int len = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    cout << endl;
    Kth_largest(arr, len, 4);


    return 0;
}
 */

// Segregate Even and Odd elements from the array..

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void segregate_evenOdd(int arr[], int size) {
    int low = 0, high = size-1;
    while(low < high) {
        while(arr[low] % 2 == 1 && low < high) low++;
        while(arr[high] % 2 == 0 && low < high) high--;
        
        if(low < high) {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {1, 3, 4, 5, 6,8, 9, 10, 11};
    int len = sizeof(arr)/sizeof(arr[0]);

    print_array(arr, len);
    cout << endl;
    segregate_evenOdd(arr, len);
    print_array(arr, len);


    return 0;
}
 */

// 0 and 1 saparated from array..usig binary search...

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i< size; i++) cout << arr[i] << " ";
}

void seperate_0ToOne(int arr[], int size) {
    int left = 0, right = size-1;
    while(left < right) {
        while(arr[left] == 0) left++;
        while(arr[right] == 1) right--;

        if(left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int arr[] = {1, 0, 1, 0, 1, 0, 0, 0, 1, 1, 0};
    int len = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    cout << endl;
    seperate_0ToOne(arr, len);
    print_array(arr, len);

    return 0;
}
 */

// get odd occourence.. from array...
  /*  #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

int get_OddOccurrence(int arr[], int size) {
    for(int i = 0; i <size; i++) {
        int count = 0;
        for(int j = 0; j < size; j++) {
            if(arr[i] == arr[j])
            count++;
        }
        if(count % 2 == 1)
            return arr[i];
    }
    return -1;
}

int main(void)
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int arr[] = {5, 7, 8, 8, 5, 8, 7, 7}; 
    int len = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    cout << endl;
    int res = get_OddOccurrence(arr, len);
    cout<<"Numbers of occourrence: " << res << endl;
}
 
 */

//find the repated element from array...
/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i<size; i++) cout << arr[i] << " ";
}

void find_repatedElements(int arr[], int size) {
    if(size <= 1) cout <<"invalid input!" << endl;
    for(int i = 0; i <size; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] == arr[j])
                cout << arr[i] << " ";
        }
    }
    
}

int main()
{   
    int arr[] = {1, 2, 3, 5, 7, 8,}; 
    int len = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    cout << endl;
    find_repatedElements(arr,len);
 

    return 0;
}

 */


// C++ program to find the only repeating element in an
// array of size n and elements from range 1 to n-1.
/* #include <bits/stdc++.h>
using namespace std;


// Returns index of second appearance of a repeating element
// The function assumes that array elements are in range from
// 1 to n-1.
int FindRepeatingElement(int arr[], int size){
	int lo = 0;
	int hi = size - 1;
	int mid;
	
	while(lo <= hi){
		mid = (lo+hi)/2;
		
		if(arr[mid] <= mid){
			hi = mid-1;
		}
		else{
			lo = mid + 1;
		}
	}
	return lo;
}

void print_array(int arr[], int size) {
    for(int i = 0; i< size; i++) cout << arr[i] << " ";
}
 */
// Driver code
// int main()
// {
// 	int arr[] = {1, 2, 3, 4, 5, 6,7, 7};
// 	int n = sizeof(arr) / sizeof(arr[0]);
//     print_array(arr, n);
//     cout<< endl;
// 	int index = FindRepeatingElement(arr, n);
// 	if (index != -1)
// 		cout << arr[index];
// 	return 0;
// } 


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {


//     return 0;
// }

/* // sorted array o,1,2
//Using Dutch National Flag Algorithom
  #include<bits/stdc++.h>
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
// simple way to solve
//sorting 0,1,2, 2, 1 , 0 without using sorting algo
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
} */

// Remove Diplicate from sorted  array
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

    // remove duplicate and return new array length
    len = RemoveDuplicate(arr,len);
    PrintArray(arr,len);

    return 0;
}
 */

// C++ program to remove duplicates in-place
/* #include<iostream>
using namespace std;

void Print_array(int arr[], int size) {
    for(int i = 0; i< size; i++) {
        cout << arr[i] << " ";
    }
}

// Function to remove duplicate elements
// This function returns new size of modified
// array.
int removeDuplicates(int arr[], int n)
{
     	// To store index of next unique element
	int j = 0;

	// Doing same as done in Method 1
	// Just maintaining another updated index i.e. j
	for (int i=0; i < n-1; i++)
		if (arr[i] != arr[i+1])
			arr[j++] = arr[i];

	arr[j++] = arr[n-1];

	return j;
}

// Driver code
int main()
{
	int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	// removeDuplicates() returns new size of
	// array.
	n =  removeDuplicates(arr, n);
    Print_array(arr, n);
	// Print updated array
	 
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

// maximum sum subarray
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
  


// C++ program to rearrange positive and negative
/// positive move Even postion and negative move odd position

/* 
#include<bits/stdc++.h>
using namespace std;

void rearrange_arr(int arr[], int n) {
    int pos(0), neg(1);
    while(true) {
        while(pos < n and arr[pos] >= 0) 
            pos += 2;

        while(neg < n and arr[neg] < 0) 
            neg += 2;

        if(pos < n and neg < n) 
            swap(arr[pos], arr[neg]);
        else break;
    }
}

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<< arr[i] <<" ";
    cout << "\n";
}


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

     int arr[] = { 1, -3, 5, 6, -3, 6, 7, -4, 9, 10 };
     int n= sizeof(arr)/sizeof(arr[0]);

    print_array(arr,n);
    rearrange_arr(arr,n);
    print_array(arr,n);
 
    return 0;
} */
// Rearrange array such that even index elements
// are smaller and odd index elements are greater
/* 
#include<bits/stdc++.h>
using namespace std;

void  solve(int arr[], int n) {

    for(int i=0; i<n-1; i++) {
        if(i%2==0 and arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);

        if(i%2==1 and arr[i] < arr[i+1])
            swap(arr[i], arr[i+1]);
    }
}

void print_aray(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";
    cout<< "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);    
    
    int n; cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    solve(arr,n);
    print_aray(arr,n);

 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"


bool check_array(vector<ll> a, vector<ll> b, int n) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    for(int i=0; i<n; i++) {
        if(a[i] != b[i])
            return false;
    }
    return true;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n; cin>>n;
    vector<ll> arr(n,0), brr(n,0);

   
    for(ll i=0; i<n; i++) {
        cin>>arr[i] ;
        cin>> brr[i];
    }

    bool ans= check_array(arr, brr, n);
    (ans==true) ? cout<< "Equal\n" : cout << "Not Equal\n";
     
    return 0;
} */
 


#include<bits/stdc++.h>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

 


    return 0;
}