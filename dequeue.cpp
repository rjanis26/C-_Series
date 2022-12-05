#include<bits/stdc++.h>
using namespace std;

int main() 
{   
    deque<int> dq;
    //deque<int>:: iterator it;
    dq.push_back(1);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(5);
    
    // for(int i = 0; i < dq.size(); ++i) {
    //     cout << dq[i] << " " ;
    // }

    // for (it = dq.begin(); it != dq.end(); ++it) {
    //     cout<< *it << " " ;
    // }

    dq.push_front(0);
    dq.pop_back();
    dq.pop_front();

    for(auto it : dq) {
        cout << it << ' ';
    }
    cout << endl;
    cout << "size of the queue: " << dq.size() << endl;
    
    cout << "Front of queue: " << dq.front() << endl;
    cout<< "Back of queue: " << dq.back() << endl;
    
    (dq.empty()) ? cout << "Yes\n" : cout << "No\n" << endl;
    dq.clear();

    (dq.empty()) ? cout << "Yes\n" : cout << "No\n" << endl;
    cout<< "Size of the queue: " << dq.size();


    return 0;
}
