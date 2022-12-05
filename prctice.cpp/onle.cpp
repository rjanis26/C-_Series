/* #include <iostream>
using namespace std;


int main()
{
    int array1[] = {1, 5, 7, 5, 8, 9, 11, 11, 2, 5, 6};
    int s1 = sizeof(array1)/sizeof(array1[0]);

    cout << "Original array: ";
    
    for (int i=0; i < s1; i++) 
    cout << array1[i] <<" ";
    
    cout <<"\nUnique elements of the said array: ";
    for (int i=0; i<s1; i++)
    {
        int j;
        for (j=0; j<i; j++)
           if (array1[i] == array1[j])
               break;
         if (i == j)
          cout << array1[i] << " ";
    }
    return 0; 
}
 */

/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int num, i = 1, sum = 0;
    cin>> num;

    while(i < num) {
        if(num % i == 0) {
            sum += i;
        }
        i++;
    }

    if(sum == num) cout << i << " is perfect number.";
    else cout << i << " is not perfect number.";

    return 0;
}  */

#include<bits/stdc++.h>
using namespace std;


int main()
{
    int arr[] = {1, 3, 5, 6, 7, 9};
    int len = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < len; i++) {
        //cout << arr[len-1-i] << " ";
        cout << arr[i-1] << " ";

    }
    cout << endl;
    
    return 0;
}
