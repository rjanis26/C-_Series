#include<bits/stdc++.h>
using namespace std;

vector<int> input() {
    vector<int> data;
    int n;
    cin>> n;
    while(n--) {
        int d;
        cin >> d;
        data.push_back(d);
    }
    return data;

}

vector<int> reverse(vector<int> data) {
    vector<int> rData;
    while(!data.empty()) {
        cout << data.back();
        data.pop_back();
    }
    return rData;
}

void output(vector<int> rData) {
    for(auto it: rData) {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{   
    vector<int> data;
    data = input();
    data = reverse(data);
    output(data);



    return 0;
}