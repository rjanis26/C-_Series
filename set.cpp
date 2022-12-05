/* #include<bits/stdc++.h>
using namespace std;


int main()
{
    set <string> s;
    set<string>:: iterator it;

    s.insert("dipta");
    s.insert("reza");
    s.insert("nabil");
    s.insert("arnob");


    // s.insert(50);
    // s.insert(6);
    // s.insert(20);
    // s.insert(6);

    // it = s.find(6);
    // s.erase(it);
    //s.erase(s.find(50));

    for (it = s.begin(); it != s.end(); it++)
    {
        cout << *it << " " ;
    }
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int main() 
{
    set<int> s;
    set<int>::iterator it;
    s.insert(1);
    s.insert(2);
    s.insert(22);
    s.insert(5);
    s.insert(1);

    // for(auto it : s) {
    //     cout << it<< " ";
    // }

    //(s.empty()) ? cout << "Empty" : cout << "Not Empty" << endl;
    it =s.begin(); it = s.erase(it);
    
    for(it = s.begin(); it != s.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "size of set: " << s.size() << endl;
     
    // it = s.find(2);
    // if(it != s.end()) cout<<"Find" << endl;
    // else cout<< "Not Find" << endl;
    
     

    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s = {1, 2, 5, 6};
    set<int>:: iterator it;

    for(auto it : s) cout<< it << " ";
    cout << endl;

    it = s.lower_bound(3); 
    if(it == s.end()) cout << "The element is larger to greater element" << endl;
    else cout << "the lower bound of 2 is: " << *it << endl;

     


    return 0;
}