/* #include<bits/stdc++.h>
using namespace std;
        
class Car{
    public:
    string brand;
    int totalCar;
    int manPower;

};

 
int main()
{   Car car1;
    car1.brand = "Toyota";
    car1.totalCar = 1000;
    car1.manPower = 50000;

    cout << "Object one details:" << endl;
    cout<< "Brad name: " << car1.brand << endl;
    cout<< "Total car:" << car1.totalCar << endl;
    cout<< "Man power" << car1.manPower << endl;


    return 0;
} */


/* #include<bits/stdc++.h>
using namespace std;

class Average{
    public:
    float num1, num2, num3;

    void input(){
        cout << "Enter first, second and third number: ";
        cin >> num1 >> num2 >> num3;
    }
    void average(){
        
        float average = (num1 + num2 + num3)/3;
        cout << "Average is:" << setprecision(2) <<average << endl;
    }
};

int main()
{
    Average aver;
    aver.input();
    aver.average();
 
    return 0;
} */


//  simple calculator project...
/* 
#include<bits/stdc++.h>
using namespace std;

class Calculator{
    public:
    int choose, num1, num2, result;

    void option(){
        cout << "Enter 1 for addition." << endl;
        cout << "Enter 2 for subtration." << endl;
        cout << "Enter 3 for multiplication." << endl;
        cout << "Enter 4 for division." << endl;
        cout << "Enter 0 for Exit." << endl;

        cout << endl << endl << "Please Enter Your Option: ";
        cin >> choose;
    }

    void input(){
        cout << endl<< "Please Enter Two Numbers: ";
        cin >> num1 >> num2;
    }

    void calculate(){
        switch (choose)
        {
        case 1:
            result = num1 + num2;
            cout<<"Addition of" << num1 << " and " << num2 << "  = " << result << endl;
            break;
        case 2:
            if (num1 > num2){
                result = num1 - num2;
                cout<<"Subtraction between " << num1 << " and " << num2 << " = " << result<< endl;
            }
            else{
                result = num2 - num1;
                cout<<"Subtraction between " << num1 << " and " << num2 << "  = "<< result<< endl;
            }
            break;
        case 3:
            result = num1 * num2;
            cout<<"Multiplication between " << num1 << " and " << num2 <<" = " << result<< endl;
            break;

        case 4:
            result = num1 / num2;
            cout<<"Division between " << num1 << " and " << num2 <<" = " << result<< endl;
            break;
        case 0:
            break;
        default:
            cout<<"Invalid choose!!!" << endl;
            break;
        }
    }
};

int main()
{
    Calculator calt;
    calt.option();
    calt.input();
    calt.calculate();

}

 */

/* 
#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";
    cout << endl;
}

void seperate_odd_even(int arr[], int n) {
    int l=0, r=n-1;
    while (l < r) {
        while (arr[l]% 2== 1 && l < r) l++;
        while(arr[r]%2 ==0 && l < r) r--;

        if(l < r) 
            swap(arr[l++], arr[r--]);
    }
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n;cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) 
        cin>> arr[i];
    
    seperate_odd_even(arr,n);
    print_array(arr,n);
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n) {    

    for(int i=0; i<n; i++) 
        cout<< arr[i] << " ";
    cout << endl;
}

void seperate_zero_one(int arr[], int n) {
    int l=0, r=n-1;

    while(l < r) {
        while(arr[l] ==0 ) l++;
        while(arr[r] == 1) r--;
    }

    if(l < r) 
        swap(arr[l++], arr[r--]);
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
    
    seperate_zero_one(arr,n);
    print_array(arr,n);
 

    return 0;
} */

 /* #include<bits/stdc++.h>
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
 /* 
#include<bits/stdc++.h>
using namespace std;

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++)
        cout<< arr[i] << " ";
    
    cout<< "\n";
}

void sorted_zero_one_two(int arr[], int n) {

    int l=0, r=n-1;
    int i=0;

    while(i <= r) {
        if(arr[i] ==0 ) 
            swap(arr[l++], arr[i++]);
        else if(arr[i] ==1) i++;
        else 
            swap(arr[r--], arr[i]);
    }
}

int main()
{

    int n;  cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    sorted_zero_one_two(arr,n);
    print_array(arr, n);
 
    return 0;
}   */

/* 
// sorted array o,1,2
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
}   */


/* 
#include<bits/stdc++.h>
using namespace std;

void  print_array(int arr[], int n) {
    for(int i=0; i<n; i++)  
        cout<< arr[i] << " ";
    cout<< endl;
}

void sort_array(int arr[], int n) {
    int zero(0), one(0), two(0);

    for(int i=0; i<n; i++) {
        if(arr[i] == 0) zero++;
        else if(arr[i] == 1) one++;
        else two++;
    }

    int k(0);
    for(int i=0; i<zero; i++) arr[k++] = 0;
    for(int i=0; i<one; i++) arr[k++] = 1;
    for(int i=0; i<two; i++) arr[k++] = 2;

}

int main()
{   
    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    sort_array(arr,n);
    print_array(arr,n);

 
    return 0;
}
 */

/* 
#include<bits/stdc++.h>
using namespace std;

void  print_array(int arr[], int n) {
    for(int i=0; i<n; i++)  
        cout<< arr[i] << " ";
    cout<< endl;
}

void sort_array(int arr[], int n) {
   
   int l=0, r=n-1, i(0);

   while(i <= r) {
        if(arr[i] == 0 ) 
            swap(arr[l++], arr[i++]);
        else if(arr[i] == 1) i++;
        else swap(arr[r--], arr[i]);
   }
}

int main()
{   
    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    sort_array(arr,n);
    print_array(arr,n);

 
    return 0;
}
 */


/* 
#include<bits/stdc++.h>
using namespace std;

void  print_array(int arr[], int n) {
    for(int i=0; i<n; i++)  
        cout<< arr[i] << " ";
    cout<< endl;
}

void sort_array(int arr[], int n) {
    
        int l=0, r=n-1, i(0);
        while(i<=r) {
            if(arr[i] == 0) 
                swap(arr[i], arr[l++]);
            else if(arr[i] == 2) {
                swap(arr[i], arr[r--]);
                continue;
            }
                 
            i++;
        
        }

}

int main()
{   
    int n; cin>>n;
    int arr[n+2];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    
    sort_array(arr,n);
    print_array(arr,n);

 
    return 0;
}
 */

/* 
#include<bits/stdc++.h> 
using namespace std;

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout << arr[i] << " ";
    
    cout<< "\n";
}

// void Move_zero(int arr[], int n) {
     
//      int j(-1);
//      for(int i=0; i<n; i++) {
//         if(arr[i] < 0) {
//             j++;
//             swap(arr[i], arr[j]);
//         }
//      }
// }

void Move_zero(int arr[], int n) {
    int a[n];
    int j=0; 

    for(int i=0; i<n; i++) {
        if(arr[i] >= 0) 
            a[j++] =arr[i];
    }

    for(int i=0; i<n; i++) {
        
        if(arr[i] < 0) 
            a[j++] = arr[i];
    }

    for(int i=0; i<n; i++) 
        cout<< a[i] <<" ";
    
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
    
    Move_zero(arr,n);
    //print_array(arr,n);
     
    return 0;
} */

 /* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void move_elements_end(int arr[], int n) {

    int l=0, r=n-1;

    while(l < r ) {
        if(arr[l] > 0) l++;
        else if(arr[r] < 0) r--;
        else swap(arr[l], arr[r]);
    }
}

void print_array(int arr[], int n) {
    for(int i=0; i<n; i++) 
        cout<< arr[i] << " ";
    cout<< "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;  cin>>n;
    int arr[n];

    for(int i=0; i<n; i++) 
        cin>>arr[i];
    
    move_elements_end(arr,n);
    print_array(arr,n);

    return 0;
}  
 */

/* 
move all negative int to end position of array

input:
 5
 1 -5 10 0 -3

ouput: 
1 10 0 -5 -3 */

// unorderd_map

/* 
#include<bits/stdc++.h>
using namespace std;


int main()
{   
    // unordered_map<string, int> ump;
    // ump["Prince"] = 44;
    // ump["gfg"] = 56;
    // ump["helloworld"] = 90;

    // for(auto it: ump) 
    //     cout<< it.first << " " << it.second<< endl;

    
    map<string, int> ump;
    ump["Prince"] = 44;
    ump["gfg"] = 56;
    ump["helloworld"] = 90;

    for(auto it: ump) 
        cout<< it.first << " " << it.second<< endl;
    
    
}
 */
/* 
#include<bits/stdc++.h>
using namespace std;

int first_element_KthTime(int arr[], int n, int k) { 
    unordered_map<int,int> mp;

    for(int i=0; i<n; i++) {
        mp[arr[i]]++;

        if(mp[arr[i]] == k) 
            return arr[i];
    }
    return -1;
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
    
    int k; cin>> k;

    int ans  = first_element_KthTime(arr,n, k);
    cout<< ans << endl;
 
    return 0;
} */


// kth elements in c++
/* 
#include<bits/stdc++.h>
using namespace std;

int find_Element(int arr[], int n, int k) {
    for(int i=0; i<n; i++) {
        int count = 0;
        for(int j=0; j<n; j++) {
            if(arr[i] == arr[j]) 
                count++;
        }

        if(count==k) 
            return arr[i];
    }
    return -1;
}

int main()
{
    int n; cin >> n; 
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    

    int k; cin>> k;
    int ans = find_Element(arr,n,k);
    cout<< ans << endl;
 
    return 0;
} */


/* 
#include<bits/stdc++.h>
using namespace std;

int find_Element(int arr[], int n, int k) {
     
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++) {
        mp[arr[i]]++;
 
    }

    for(int i=0; i<n; i++)  {
        if(mp[arr[i]] == k) 
            return arr[i];
    }
        
    return -1;
    
}

int main()
{
    int n; cin >> n; 
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    

    int k; cin>> k;
    int ans = find_Element(arr,n,k);
    cout<< ans << endl;
 
    return 0;
}

   //{1 7 4 3 4 8 7}   

   */
 /* 

#include<bits/stdc++.h>
using namespace std;

int find_Element(int arr[], int n, int k) {
    
    map<int, int> m;
    for(int i=0; i<n; i++) {
        m[arr[i]]++;

        if(m.find(arr[i]) != m.end()) {
            if(m[arr[i]] == k) 
                return arr[i];
        }
    }    

    return -1;
    
}

int main()
{
    int n; cin >> n; 
    int arr[n];
    for(int i=0; i<n; i++)
        cin>> arr[i];
    

    int k; cin>> k;
    int ans = find_Element(arr,n,k);
    cout<< ans << endl;
 
    return 0;
} */

/* 
#include<bits/stdc++.h>
using namespace std;

bool solve(int a[], int b[], int n, int m) {
    if(n != m) 
        return false;
    
    sort(a, a+n);
    sort(b, b+n);

    for(int i=0; i<n; i++) {
        if(a[i] != b[i]) 
            return false;
    }

    return true;
}

int main()
{
    int n; cin>>n;
    int  a[n];
    for(int i=0; i<n; i++) 
        cin>> a[i];
    
    int m; cin>> m;
    int b[m];
    for(int i=0; i<m; i++) 
        cin>> b[i];
    
    bool ans = solve(a, b, n, m);
    
    (ans == true) ? cout<< "Yes\n" : cout<< "No\n";
 

    return 0;
} 

  */
/* 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

class Solution {
    public:

        bool solve(vector<ll> &A, vector<ll> &B, int n) {
            vector<ll> a; vector<ll> b;
            for(auto x : A) 
                a.push_back(x);
            sort(a.begin(), a.end());

            for(auto x : B ) 
                b.push_back(x);
            sort(b.begin(), b.end());

            if(a==b) 
                return 1;
            else return 0;
        }
};

int main()
{
    int test; cin>> test;
    while(test--) {
        int n; cin>>n;
        vector<ll> a(n, 0), b(n, 0);

        for(int i=0; i<n; i++) {
            cin>> a[i];
            cin>> b[i];

        }

        Solution solution;
        solution.solve(a, b, n) << endl;
    }
 
 
    return 0;
} */

 