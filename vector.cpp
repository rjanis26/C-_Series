/* #include<iostream>
using namespace std ;

int main()
{
    cout << "Name: Anisul Islam" << endl;
    cout <<"Father's Name: Nazim Uddin" << endl;
    cout << "Mother's Name : Amina Khatun" << endl;

    return 0;
 }
 */


// variable in c++....

/* #include<iostream>
using namespace std;

int main()
{   
    int num1, num2;
    cout<<"Enter two numbers:: ";
    cin>> num1 >> num2;

    cout<<"Number 1: " <<num1 << endl;
    cout<<"Number 2: " <<num2 << endl;

    int sum = num1 + num2;
    cout<<"Sum is: " << sum << endl;

    int sub ;
    if(num1 > num2)
    {
        sub = num1 - num2;
    }
    else{
        sub = num2 - num1;
    }

    cout<< "Subtraction is: " <<sub << endl;
    
    return 0;
}
 */


/* #include<iostream>
#include<ctype.h>
using namespace std;

int main(void)
{   
    char ch;
    cout<< "Enter any character: " << endl;
    cin>> ch;

    if(isupper(ch))
    {
        cout<< "Its uppercase character." << endl;
    }
    else if(islower(ch))
    {
        cout<< "its lower character." << endl;
    }
    else if(isdigit(ch))
    {
        cout<< "Its a digits character." << endl;
    }
    else{
        cout<< "Its a special character." << endl;
    }
} */


/* #include<iostream>
#include<stdio.h>
#include<vector>

using namespace std;

int main()
{
    int vector<int> vec;

    vec.push_back(10);
    vec.push_back(34);
    vec.push_back(45);

    cout<< vec[0] << endl;




    return 0;
}
 
 */


/* #include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vec ;
    vector <int>:: iterator it;

    for(int i = 1; i <= 5; i++)
    {
        vec.push_back(i);
    }

    for(int i = 0; i < vec.size(); i++){
        cout<< vec[i] << "\t";
    }
    puts("");

    it = vec.begin();
    it++;
    cout<< *it << endl;

}

 */

/* #include<bits/stdc++.h>
using namespace std;

bool myfunc(int a, int b)
{
    return (a > b);
}

int main()
{   
    vector <int> vec;
    vector <int>:: iterator it;
    
    vec.push_back(10);
    vec.push_back(432);
    vec.push_back(55);
    vec.push_back(12);
    vec.push_back(50);
     
    //sort(vec.begin(), vec.end(), myfunc);   

    sort(vec.begin(), vec.begin() + 3); 

    // printing the vector...
    for(it = vec.begin(); it != vec.end(); it++){
        cout<< *it << "\t";
    }


    return 0;
}
 */

#include<bits/stdc++.h>
using namespace std;

int main()
{  
    int arr[5] = {5, 2, 1, 6, 3};

    //sort(arr, arr+4);
    cout<< endl;
    sort(arr+2, arr+5);

    for(int i = 0; i < 5; i++){
        cout<< arr[i] << "\t";
    }



    return 0;
}












