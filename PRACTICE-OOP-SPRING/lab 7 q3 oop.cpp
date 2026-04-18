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
		
	friend class payroll;	
};
class payroll{
	public:
		int update(employee& e,int s){
			e.salary =  s;
		}
		
		void view(employee& e){
			cout<<"Name :"<<e.name<<endl;
			cout<<"ID :"<<e.id<<endl;
			cout<<"Designation :"<<e.designation<<endl;
			cout<<"Salary :"<<e.salary<<endl;
			
			
		}
	
};
int main(){
	employee e1("Nehal", 4900, "Manager", 7000);
	payroll a;
	 a.view(e1);
	
	a.update(e1,10000);
	
	cout<<"\t----UPDATED SALARY----\t"<<endl;
	
	a.view(e1);
	
	return 0;
}
