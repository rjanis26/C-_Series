#include<bits/stdc++.h>
using namespace std;

int main(){
    multimap <string, int> m;
    multimap <string, int>::iterator it;

     m.insert(make_pair("dipta", 43));
     m.insert(make_pair("dipta", 46));
     m.insert(make_pair("nagin", 34));
     m.insert(make_pair("riya", 55));
     m.insert(make_pair("ratul", 66));
     m.insert(make_pair("arnob", 43));
     

     for(it = m.begin(); it != m.end(); it++){
         cout<< it->first << " " << it->second << endl;
     }



    return 0;
}