/* #include<bits/stdc++.h>
using namespace std;

template<typename T>
T maxi(T a, T b) {

    if(a > b) 
    return a;
    else
    return b;
}

int main()
{   
    cout << maxi<int>(3, 5) << endl;
    cout << maxi<float>(3.5, 6.2) << endl;
    cout << maxi<char>('A', 'b') << endl;
    //cout << maxi<string>('Hello', 'world') << endl;
    
    return 0;
}
 */

#include<bits/stdc++.h>
using namespace std;

int main() 
{   
    vector<int> vec;
    //vector<int>:: iterator it;
    vec.push_back(10);
    vec.push_back(-1);
    vec.push_back(300);
    vec.push_back(40);

     

    // for(it = vec.begin(); it != vec.end(); it++) {
    //     cout << *it << " " ;
    // }

    for(auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }

    







    // vec.insert(vec.begin()+1, 11);
    // vec.insert(vec.end()-3, 44);
    // vec.insert(vec.begin(), 3, 1);
    // //reverse(vec.begin(), vec.end());

    // for(int i = 0; i < vec.size(); ++i) {
    //     cout << vec[i] << " ";
    // }  
    // puts(" ");

    
 

    return 0;
}