#include<bits/stdc++.h>
using namespace std;

int main() 
{   
    map<int, int> mp;
    int ans;
    for(int i = 0; i < v.size(); ++i) {
        int x = v[i];
        mp[x]++;
    }   
    for(auto it : map) {
        int x = it.first;
        int y = it.second;
        if(y!=3)
        ans = x;
        break;
    } 

    return ans;




    return 0;
}