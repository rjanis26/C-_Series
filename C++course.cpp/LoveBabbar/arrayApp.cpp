/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
}

void second_largest(int arr[], int size) {
    int first, second;
    if(size < 2) cout << "Invalid input!";
    return;

    first = second = INT_MIN;
    for(int i = 0; i < size; i++) {
        if(arr[i] > first) {
            second = first; 
            first = arr[i];
        }  
        else if(arr[i]> second && arr[i] != first) {
            second = arr[i];
        }
    }
    if(second == INT_MIN)
        cout <<"there is no second largest!";
    else 
        cout << "The second largest: " << second << endl;
}

int main()
{
    int arr[] = {13, 12, 35, 1, 10, 34, 1};
    int len = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    cout << endl;
    second_largest(arr, len);
 
    return 0;
} */

/*#include<iostream>
using namespace std;
void second_largest(int nums[], int arr_size)
  {
   int i, first_element, second_element;
 
    ///There should be atleast two elements 
    if (arr_size < 2)
    {
        cout<< " Invalid Input ";
        return;
    }
 
    first_element = second_element = INT_MIN;
    for (i = 0; i < arr_size ; i ++)
    {
  
        if (nums[i] > first_element)
        {
            second_element = first_element;
            first_element = nums[i];
        }
        else if (nums[i] > second_element && nums[i] != first_element)
        {
            second_element = nums[i];
        }
    }
    if (second_element == INT_MIN)
     {
        cout<< "No second largest element";
     }
    else
     { 
        cout<< "\nThe second largest element is: " <<second_element;
     }
}

int main()
{
    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
    int n = sizeof(nums)/sizeof(nums[0]);
    cout << "Original array: ";
    for (int i=0; i < n; i++) 
    cout << nums[i] <<" ";
   second_largest(nums, n);
    return 0;
}
 */

//replace elements prev multiplay to next...

/* #include<bits/stdc++.h>
 using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void replace_element(int arr[], int size) {

    if(size <= 1) return;

    int prev = arr[0];
    arr[0] = arr[0] * arr[1];
    for(int i = 0; i < size -1; i++) {
        int curr = arr[i];
        arr[i] = prev * arr[i+1];
        prev = curr;
    }
    arr[size-1] = prev * arr[size-1];
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {1, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    cout << endl;
    replace_element(arr, len);
    print_array(arr, len);

    return 0;
}
  */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void swap_alternative(int arr[], int size){
    
    if(size <= 1) return;
    for(int i = 0; i < size; i += 2) {
        if(i+1 < size) {
            swap(arr[i], arr[i+1]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {1, 3, 5, 6, 8, 9, 0, 10};
    int len = sizeof(arr)/sizeof(arr[0]);

    print_array(arr, len);
    cout << endl;
    swap_alternative(arr, len);
    print_array(arr, len);


    return 0;

}
 */
 
// Delete element from array...

/* #include<bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    puts(" ");
}

int deleteElement(int arr[], int size, int item) {
    //search item in arrray
    int i;
    for(int i = 0; i < size; i++) {
        if(arr[i] == item) break;
    }

    // if  item found in array
    if( i < size) {
        size = size-1;
        for(int j = i; j < size; j++) {
            arr[j] = arr[j+1];
        }
    }

    return size;
}

int main()
{
    int arr[] = {11, 15, 6, 8, 9, 10};
    int len = sizeof(arr)/sizeof(arr[0]);
    int item = 15;

    PrintArray(arr, len);
    len = deleteElement(arr, len, item);
    PrintArray(arr, len);


    return 0;
} */

// C++ program to remove a given element from an array
/* #include<bits/stdc++.h>
using namespace std;

// This function removes an element x from arr[] and
// returns new size after removal (size is reduced only
// when x is present in arr[]
int deleteElement(int arr[], int n, int x)
{
// Search x in array
int i;
for (i=0; i<n; i++)
	if (arr[i] == x)
		break;

// If x found in array
if (i < n)
{
	// reduce size of array and move all
	// elements on space ahead
	n = n - 1;
	for (int j=i; j<n; j++)
		arr[j] = arr[j+1];
}

return n;
}

 //Driver program to test above function 
int main()
{
	int arr[] = {11, 15, 6, 8, 9, 10};
	int n = sizeof(arr)/sizeof(arr[0]);
	int x = 10;

	// Delete x from arr[]
	n = deleteElement(arr, n, x);

	cout << "Modified array is \n";
	for (int i=0; i<n; i++)
	cout << arr[i] << " ";

	return 0;
} */

#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

void Zigzag_array(int arr[], int size) {
    bool ans = true;
    for(int i = 0; i < size -1; i++) {
        if(ans) {
            if(arr[i] > arr[i+1]) 
                swap(arr[i], arr[i+1]);
        }
        else {
            if(arr[i] < arr[i+1]) 
                swap(arr[i] , arr[i+1]);
        }
        ans = !ans;
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

    Zigzag_array(arr, len);
    print_array(arr, len);


    return 0;
}