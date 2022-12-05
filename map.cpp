/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    map <string, int> m;
    map <string, int>::iterator it;


    m["Dipta"] = 43;
    m["Arnob"] = 42;
    //m["Nabil"] = 41;
    m.insert(make_pair("Nabil", 41));

    // it = m.begin();
    // ++it;
    // cout << it->second << endl;

    for(it = m.begin(); it != m.end(); ++it)
    {
        cout<< it->first << " " << it->second << endl;
    }


    //cout << m["Arnob"] << endl;

    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;
    map<int, int>::iterator it;

    mp.insert(make_pair(1, 3));
    mp.insert(make_pair(2, 5));
    mp.insert(make_pair(3, 7));

    for(auto it:mp){
        cout << it.first << " " << it.second << endl;
    }

    cout<< "size of map: " << mp.size() << endl;
    (mp.empty()) ? cout << "Empty" : cout << "Not Empty" << endl;
    //mp.clear();
    //cout<< "size of map: " << mp.size() << endl;
    
    return 0;
}
