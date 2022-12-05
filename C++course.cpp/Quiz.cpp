#/* nclude<bits/stdc++.h>
using namespace std;

class A{
    public:
    int num1, num2;

    void input(){
        cout<< "Enter two number: "<< endl;
        cin >> num1 >> num2;
    }

    void average(){
        int aver = (num1 + num2)/2;
        cout << "Average is: " << aver << endl;
    }

    void even_odd(){
        int total = (num1 + num2);
        if(total % 2 == 0){
            cout << "Even number." << endl;
        }
        else{
            cout << "Odd number" << endl;
        }
    }
};


int main()
{   
    A obj;
    obj.input();
    obj.average();
    obj.even_odd();
 
    return 0;
} */


/* #include<bits/stdc++.h>
#define pi 3.1416
using namespace std;

class Circle{
    public:
     
    int  diameter(int x){
        int diamtr = 2 * x;
        cout << "Diameter: " << diamtr << endl;
    }

    void circumference(int x){
        float circum = (2 * pi * x);
        cout << "Circumference: " << circum << endl;
    }
    int area(int x){
        float ar = (pi * x * x);
        cout << "Area of circle:" << ar << endl;
    }
};

int main(){

     float radius;
     cout << "Enter radius of circle: ";
     cin >> radius;

     Circle circle;
     circle.diameter(radius);
     circle.area(radius);


    return 0;
} */

// Array of object....

/* #include<bits/stdc++.h>
using namespace std;

class mySelf{
    public:
    void print(int i){
        cout<< i << ":: Md Anisul islam Anis." << endl;
    }
};

int main(){
    mySelf self[50];
    for(int i = 1; i <= 50; i++){
        self[i].print(i);
    }


    return 0;
} */


// inline and outline function.....

/* #include<bits/stdc++.h>
using namespace std;

class Lecture{
    public:
    int num1, num2;

    void input();
    void calculate();
};

//outline function....
void Lecture::input(){
    cout <<"Enter two numbers:";
    cin >> num1 >> num2;
}

void Lecture::calculate(){
    int result = num1 + num2;
    cout << "Sum is: " << result << endl;
}

int main(){
    Lecture lecture;
    lecture.input();
    lecture.calculate();

    return 0;
}
 */

// friend function....

//1. A friend function is not a member function.
// 2. We can declare it both in a private and public.
// 3.it is decleared with the friend keyword;
// 4.it can declear indise the class but must be define from outside the class.
// 5.always define outside from the class without scope resolution operator.
// 6.it has own object.
// 7. from outside the class, it will call the private and protected member function..

/* #include<bits/stdc++.h>
using namespace std;

class Tutorial{
    private:
    string muName = "Md. Anisul islam";

    friend void display(Tutorial &dis);
    // friend int display(Tutorial dis);
};

void display(Tutorial &dis){
    dis.muName;
    cout <<"My name is: " << dis.muName << endl;
}

int main(){
    Tutorial tutor;
    display(tutor);

    return 0;
}
 */

/* #include<bits/stdc++.h>
using namespace std;

class test{
    int price[5], sum = 0;

    public:
    void input(){
        cout<<"Enter your five product price: ";
        for(int i = 0; i < 5; i++){
            cin>> price[i];
        }
    }

    friend int total(test totl);

};

int total(test totl){
    for(int i = 0; i < 5; i++){
        totl.sum += totl.price[i];
    }
    cout<<"Sum of products: " << totl.sum << endl;
}


int main(){
    test test;
    test.input();

    total(test);

    return 0;
} */

// constructors in oop...

#include<bits/stdc++.h>
using namespace std;  

class input{
    public:
    int x, y;
    input(){
        cout << "Enter two numbers: ";
        cin >> x >> y;
    }

    void output(){
        cout<< "sum of the two numbers: " << x + y;
    }
};

int main(){

    input obj;
    obj.output();

     return 0;
}