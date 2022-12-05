#include<iostream>
using namespace std;


struct Smartphone {
	string name;
	int storageSpace;
	string color;
	float price;
};

struct person {
	string name;
	int age;
	Smartphone smartphone;
}; 

void printSmartphoneInfo( Smartphone smartphone){
	cout<<" Phone Name: " <<smartphone.name <<endl;
	cout<<" storageSpace: "<<smartphone.storageSpace <<" GB " <<endl;
	cout<<" Colour: "<<smartphone.color <<endl;
	cout<<" Price: "<<smartphone.price <<" $ "<<endl;
	cout<<"------------------------------------------\n\n";
}

void printPersonInfo(person person){
		cout<< " Name: " <<person.name  << endl;
	cout<<" Age: " <<person.age <<endl;
	printSmartphoneInfo(person.smartphone );
}

int main (){
	
	string  name = "iphone 12";
	int storageSpace = 32 ;
	string color = "Black";
	float price = 999.99 ;
	
	
	string name2 = "Samsung Galax S21 Ultra";
	int storageSpace2 = 64  ;
	string color2 = "Gray";
	float  price2 = 888.88    ;
	
	Smartphone smartphone;
	smartphone.name =" iphone 12 ";
	smartphone.storageSpace = 32  ;
	smartphone.color = "Black";
	smartphone.price = 999.99  ;
	
	Smartphone smartphone2;
	smartphone2.name = "Samsung Galaxy S21 Ultra";
	smartphone2.storageSpace  = 64 ;
	smartphone2.color = "Gray";
	smartphone2.price = 888.88  ;
	
// printSmartphoneInfo(smartphone);
  //printSmartphoneInfo(smartphone2);
  person p;
  p.name ="Tabiya";
  p.age = 23;
  p.smartphone = smartphone;
  printPersonInfo(p);
  
	return 0;
}
