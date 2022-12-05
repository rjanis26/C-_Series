/* #include<bits/stdc++.h>
using namespace std;

void find_threeLargest(int arr[], int size) {

    int first, second, third;
    third = first = second = arr[0];
    if(size < 3) cout << "Invalid input!";

    for(int i = 0; i < size; i++) {
        if(arr[i] < first) {
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] < second) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] < third) {
            third = arr[i];
        }
         
    }
    cout << "Three largest of array: " << first << ", " << second << ", " << third << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    
    int arr[] = {1, 3 , 4, 10, 20, -1, 50};
    int len = sizeof(arr)/sizeof(arr[0]);
    find_threeLargest(arr, len);

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void replace_array_evenOdd(int arr[], int size) {

    for(int i = 0; i < size; i++) {
        if(arr[i] % 2 == 0) arr[i] = 0;
        else arr[i] = 1;
    }
}

void print_array(int arr[], int size) {

    for (int i = 0; i <size; i++) {
        cout << arr[i] << " ";
    }
}


int main()
{   
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int arr[] = {1, 4, 5, 6, 8, 9, 11};
    int len = sizeof(arr)/sizeof(arr[0]);

    cout <<"Orginal array: ";
    print_array(arr, len);
    replace_array_evenOdd(arr, len);
    cout << endl;
    cout <<"After replacement: ";
    print_array(arr, len);




    return 0;
} */

// find the element from the array...

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {

    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int find_element(int arr[], int size, int item) {

    for(int i  = 0; i < size; i++) {
        if(arr[i] == item) {
            return i;
            break;
        }
         
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 6 ,2, 8, 9, 0, 11, 7};
    int len = sizeof(arr)/sizeof(arr[0]);
    //cout<< len << endl;

    cout << "Orgianl array: ";
    print_array(arr, len);
    cout << endl;
    int index = find_element(arr, len,2);
   (index == 1) ? cout<< "Found at index: "<< index <<"\n" : cout << "Not found!";
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void sort_array(int arr[], int size) {

    for(int i = 0; i < size - 1; i++) {
        for(int j = i+1; j < size; j++) {
            if(arr[i] > arr[j]) swap(arr[i], arr[j]); // ascending order...
            // if(arr[i] < arr[j]) swap(arr[i], arr[j]) // decending order...
        }
    }
}

void reverse_array(int arr[], int size) {
    int left = 0, right = size - 1;
    while(left <= right){
        swap(arr[left++], arr[right--]);
    }
}


int main()
{
    int arr[] = {1, 2, 4, 0, -1, 5, 8, 11, 10, 3};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    cout <<"Orgial array: ";
    print_array(arr, len);
    cout << endl;
    sort_array(arr, len);
    cout << "After sorting array: " << endl;
    print_array(arr, len);
    cout << endl;
    reverse_array(arr, len);
    cout << "After revesing: " << endl;
    print_array(arr, len);

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void swap_alternative(int arr[], int size) {
    for(int i = 0; i < size; i += 2) {
        if(i + 1 < size) swap(arr[i], arr[i+1]);
    }
}

int main()
{   
    int even[] = {2};
    int len = sizeof(even)/sizeof(even[0]);

    cout <<"Orginal array: ";
    print_array(even, len);
    cout << endl;
    swap_alternative(even, len);
    cout << "After swaping: ";
    print_array(even, len);


    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i <size; i++) cout << arr[i] << " ";
}

void divisible_number(int arr[], int size) {
    int x = 11, count = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] % x == 0) count++;
    }
    cout << "Total element divisible by x : " << count << endl;

}
 

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    int arr[] = {1, 4, 6, 7, 7, 9, 10, 11, 33, 2};
    int len = sizeof(arr)/sizeof(arr[0]);
    cout<< "Orginal array: ";
    print_array(arr, len);
    cout << endl;
    divisible_number(arr, len);


    return 0;
} */
// Remode duplicate form sorted array
/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int len) {
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int removeDuplicate(int arr[], int len) {
    if(len < 2) 
        cout << "opps! Invalid input.";

    int j = 0;
    for(int i = 0; i < len-1; i++) {
        if(arr[i] != arr[i+1])
            arr[j++] = arr[i];
    }
    arr[j++] = arr[len-1];
    return j;
}

// int removeDuplicate(int arr[], int len) {
//     int ans = 0;
//     for(int i = 0; i < len; i++) {
//         ans = ans^arr[i];
//     }
//     return ans;
// }

int main()
{   
    freopen("test.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

 
    int len; cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];
    len = removeDuplicate(arr,len);
    print_array(arr, len);


    return 0;
}
  */


















