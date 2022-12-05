
 /* #include<bits/stdc++.h>

#define size 5
using namespace std;
 
 int display_array(int arr[], int length)
 {
     int sum = 0;
     for (int i = 0; i < size; i++){
         sum += arr[i];
         cout << arr[i] << endl;
     }
    cout << "sum is: " << sum << endl;
    return sum;
 }

int main()
{   
    int arr[size] = {1, 2, 3, 4, 5};

    display_array(arr, size);

 
    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;
#define size 6

int sum (int arr[], int length){
    int add = 0;
    for (int i = 0; i < length; i++){
        add += arr[i];
    }
    cout << "Total price : " << add << endl;
    return add;
}

int main(){   
    int arr[size];
    cout << "Enter your 5 products price: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    sum (arr, size);


    return 0;
} */

/* #include<bits/stdc++.h>
using namespace std;
#define size 5

 void display_info (string name[], int id[], int length){
    for(int i = 0; i < size; i++){
        cout << "Information of student no - " << i+1 << endl;
        cout << "Enter name: " << name[i] << endl;
        cout << "Enter ID: " << id[i] << endl;       
        cout << endl << endl;
    }
}

int main()
{
    string name[size];
    int id[size];
    cout << "Enter student information -->";
    for(int i = 0; i < size; i++){
        cout << "Enter student no - " << i+1 << " information" << endl;
        cout << "Enter name: ";
        cin >> name[i];
        cout << "Enter ID: ";
        cin >> id[i];
        
        cout << endl << endl;
    }

    display_info(name, id, size);
}
 */


#include<bits/stdc++.h>
using namespace std;

class Rectangle{
    public:
    int length, width, peritr, area;

    void input(){
        cout<< "Enter the length and width: ";
        cin>> length >> width;

    }
    void areas(){
        area = (length * width);
        cout<< "Area of rectangle: " << area << endl;
    }

    void perimeter(){
        peritr = 2 * (length + width);
        cout<< "perimeter of rectangle: " << peritr << endl;
    }

    void nested(){
        input();
        areas();
        perimeter();
    }
};

int main()
{   
    Rectangle rect;
    rect.nested();
    
    return;
}






