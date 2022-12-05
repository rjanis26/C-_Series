#include<bits/stdc++.h>
using namespace std;

struct Smartphone{
    string name;
    int stroagepace;
    string color;
    float price;
};

struct Person{
    string name;
    int age;
    string profession;
    int id;
    Smartphone smartphone2;

};

void print_smartphone_info(Smartphone smartphone){
    cout << "Name: " <<  smartphone.name << endl;
    cout<< "Srotagespace: " << smartphone.stroagepace <<" GB " << endl;
    cout<< "Color: " << smartphone.color << endl;
    cout << "Price: " << smartphone.price << "$" << endl;
    puts(" ");
    cout << endl << endl;
}

void print_person_information(Person person){
    cout<< "Name: " << person.name << endl;
    cout <<"Age: " << person.age << endl;
    cout << "Profession: " << person.profession << endl;
    cout << "Id: " << person.id << endl;
    print_smartphone_info(person.smartphone2);
}
 
int main()
{   Smartphone smartphone;
    smartphone.name = "Iphone 12";
    smartphone.stroagepace =32;
    smartphone.color = "Black";
    smartphone.price = 999.99;

    Smartphone smartphone2;
    smartphone2.name = "Samsung Galaxy S21 Ultra";
    smartphone2.stroagepace = 64;
    smartphone.color = "Gray";
    smartphone2.price = 888.88;

    Person person;
    person.name = "Md. Anisul Islam";
    person.age = 20;
    person.profession = "Software Engineer";
    person.id = 180028;
    person.smartphone2 = smartphone2;

    print_person_information(person);
    
    //print_smartphone_info(smartphone);
    //print_smartphone_info(smartphone2);
 
    return 0;
}