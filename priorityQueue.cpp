/* #include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int> q;
    q.push(1);
    q.push(40);
    q.push(30);
    q.push(55);
    q.push(100);

    while(!q.empty()){
        int x;
        x = q.top();
        cout<< x << " ";
        q.pop();
    }

     

    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;

int main() {

    queue<int> q;
    (q.empty()) ? cout << "Empty\n" : cout << "Not Empty\n";
    q.push(1);
    q.push(2);
    q.push(10);
    q.push(20);
    q.pop();

    cout<<"size of queue: " << q.size() << endl;
    cout<< "Front of queue: " << q.front() << endl;
    cout << "Back of queue: " << q.back() << endl;
    (q.empty()) ? cout << "Empty\n" : cout << "Not Empty\n";

    // while(!q.empty()) {
    //     cout << q.front() << " ";
    //     q.pop();
    // }

    while(q.size() > 0) {
        cout << q.front() << " ";
        q.pop();
    }
 
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    //priority_queue<int, vector<int>, greater<int>> q;
    //priority_queue<int, vector<int>, greater<int>> q;
    priority_queue<int> q;
    q.push(19);
    q.push(30);
    q.push(4);
    q.push(5);

    while(!q.empty()) {
        cout<< q.top() << " ";
        q.pop();
    }
    cout << endl;

    cout << "size of queue: " << q.size() << endl;
    (q.empty()) ? cout << "Empty\n" : cout << "Not Empty\n" << endl;
    cout<<"Top of queue: " << q.top() << endl;

    return 0;

}
