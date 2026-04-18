#include<iostream>
using namespace std;
class employee{
	private:
		string name;
		int id;
		string designation;
		int salary;
	public:	
		employee(string n, int i, string d, int s):name(n),id(i),designation(d),salary(s){
		}
		
	friend void updatesalary(employee& e, int s);
	
		void view(){
		
			cout<<"Name :"<<name<<endl;
			cout<<"ID :"<<id<<endl;
			cout<<"Designation :"<<designation<<endl;
			cout<<"Salary :"<<salary<<endl;
			
			
		}	
};

		void updatesalary(employee& e,int s){
			e.salary =  s;
		}
		
	
int main(){
	employee e1("Nehal", 4900, "Manager", 7000);
	e1.view();
	
	updatesalary(e1,10000);
	
	cout<<"\t----UPDATED SALARY----\t"<<endl;
	
	e1.view();
	
	return 0;
}
