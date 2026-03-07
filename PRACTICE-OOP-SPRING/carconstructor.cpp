#include<iostream>
using namespace std;
class Car {
	public:
	string name;
	string model;
	int year;
	
	
	Car();
	
	

};

  Car::Car(){
		name = "Toyota";
		model = "Corolla";
		year = 2020;
		
	} 
 int main(){
 	Car mycar;
 	cout<<"Brand: "<<mycar.name<<endl;
 	cout<<"Model: "<<mycar.model<<endl;
 	cout<<"Year: "<<mycar.year<<endl;
 	
 	
 	return 0;
 }
