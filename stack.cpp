/* #include<bits/stdc++.h>
using namespace std;
// LIFO--> last in ---- first out....

int main(){

    stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(5);

    // stack <string> s;
    // s.push("diapta");
    // s.push("nabil");
    // s.push("arnob");

    // cout << s.top() << endl;

    // s.pop();
    // cout<< "top of the stack: " << s.top() << endl;

    // print stack..

    cout << "top of the stack: " <<s.top() << endl;
    while(!s.empty()){
         int x;
        x = s.top();
        cout << x << "\t";
        s.pop();
    }
 
    return 0;
} */

#include<bits/stdc++.h>
using namespace std;

int main() 
{
    stack<string> s;
    // s.push(1);
    // s.push(2);
    // s.push(5);
    // s.push(7);
    // s.push(11);

    // s.push('a');
    // s.push('b');
    // s.push('c');
    // s.push('n');

    s.push("Hello");
    s.push("I");
    s.push("Love");
    s.push("You");
    s.pop();

     cout <<"top of the stack: " << s.top() << endl;
     cout <<"size of stack: " << s.size() << endl;

    //s.pop();
    while(!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    cout <<"top of the stack: " << s.top() << endl;
    cout <<"size of stack: " << s.size() << endl;

     
    //(s.empty()) ? cout << "Empty\n" : cout << "Not Empty\n";
     


    return 0;
}