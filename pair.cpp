#include<bits/stdc++.h>
using namespace std;

int main()
{  
    // pair <string, int> p;
    // //p.first = "dipta";
    // //p.second = 21;

    // p = make_pair("dipta", 21);

    // cout << p.first << " " << p.second << endl;

    vector <pair<int, string>> v;
    vector <pair<int, string>>::iterator it;

    v.push_back(make_pair(21, "dipta"));
    v.push_back(make_pair(33, "nabil"));

    //cout << v[0].first << endl;

    for(it = v.begin(); it != v.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}