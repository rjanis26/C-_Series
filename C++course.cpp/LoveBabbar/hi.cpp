/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout<< arr[i] << " ";  
}

void postiveNegtive_sum(int arr[], int size) {
    int pos_sum = 0, neg_sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0) pos_sum += arr[i];
        else neg_sum += arr[i];
    }
    cout << "Positive sum: " << pos_sum << endl;
    cout << "Negative sum: " << neg_sum << endl;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int len;
    cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin>> arr[i];
     
    print_array(arr, len);
    cout << endl;
    postiveNegtive_sum(arr,len);

    return 0;
} */
 
/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void replace_element(int arr[], int size) {

    if(size <= 1) {
        cout << "Invalid input!";
        return;
    }

    int prev = arr[0];
    for(int i = 0; i < size -1; i++) {
        int curr = arr[i];
        arr[i] = prev * arr[i+1];
        prev = curr;
    }
    //arr[size-1] = prev * arr[size-1];
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
     
void second_largest(int arr[], int size) {

    if(size < 2) {
        cout << "Must have 2 elements!";
        return ;
    }
    int first , second;
    first = second = INT_MIN;   
    for(int i = 0; i < size; i++) {
        if(arr[i] > first ) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) second = arr[i];
    }
    if(second == INT_MIN) cout << "No second largest!" << endl;
    else cout << "Second largest: " << second << endl;
     
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] = {1, 3, 4, 5, 6, 7, 8};
    int len = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    cout << endl;
    second_largest(arr, len);
    return 0;
}
 */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void multiplay_nextPrev(int arr[], int size) {
    
    if(size <= 1) {
        cout <<"Invalid input!";
        return;
    }
    int prev = arr[0];
    for(int i = 0; i < size - 1; i++) {
        int curr = arr[i];
        arr[i] = prev * arr[i+1];
        prev = curr;
    }
    arr[size-1] = prev * arr[size-1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int arr[] = {1, 2, 3, 5, 6, 7, 9, 10};
    int len = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    cout << endl;
    multiplay_nextPrev(arr, len);
    print_array(arr, len);

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size ) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void seperate_even_odd(int arr[], int size) {
    int start = 0, end = size - 1;
    while(start < end) {
        while(arr[start] % 2 == 1) start++;
        while(arr[end] % 2 == 0) end--;

        if(start < end) {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int len = sizeof(arr)/sizeof(arr[0]);
    print_array(arr, len);
    cout << endl;
    seperate_even_odd(arr, len);
    print_array(arr,len);

    return 0;
} 

 */

/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

void seperate_zero_one(int arr[], int size) {
    int left = 0, right = size - 1;
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
    cin.tie(NULL);
    int len;
    cin >> len;
    int arr[len];
    for(int i = 0; i < len; i++) cin >> arr[i];
    print_array(arr,len);
    cout << endl;
    seperate_zero_one(arr, len);
    print_array(arr, len);

    return 0;
} */

// find the repated elements from array..
/* #include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int size) {
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
}

int find_repeating_elements(int arr[], int size) {
    int low = 0;
    int high = size-1;
    while(low <= high) {
        int middle = (low + high)/2;
        if(arr[middle] <= middle) {
            high = middle - 1;
        }
        else{
            low = middle + 1;
        }
    }
    return low;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[] =  {1, 2,2, 3, 1, 1, 4, 5, 6,7, 7};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    print_array(arr, len);
    cout << endl;
    
    int index = find_repeating_elements(arr, len);
    if(index != -1) 
        cout << arr[index];
    return 0;
}
 */



 





















