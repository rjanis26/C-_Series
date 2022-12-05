#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    string name, email;
    int number;

    int input(){
        cout << "Enter your name: ";
        getline(cin, name);

        cout << "Enter your Email: ";
        getline(cin, email);

        cout << "Enter your phone number: " ;
        cin>> number;
    }

    int output(){
        cout<<endl <<endl <<"Your name: " << name << endl;
        cout << "Your Email Address: " << email << endl;
        cout << "Your phone number: " << number << endl;
    }

    int filemaker(){
    ofstream file ("info.txt");
    file<<"Enter your: " << name << endl;
    file << "Your Email Address: " << email << endl;
    file << "Your phone number: " << number << endl;
    file.close();
     
}
};

int main()
{
    A a;
    a.input();
    a.output();
    a.filemaker();

    return 0;
}