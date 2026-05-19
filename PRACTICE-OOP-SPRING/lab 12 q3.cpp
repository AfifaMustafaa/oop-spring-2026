#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class person{
	public:
		int age;
		char name[50];
	
		
		person(string n , int a){
			for( int i=0 ; i<n.size() ; i++){
				name[i] = n[i];
				
			}
			age = a;
			
		}
};
int main(){
	person p1("Afifa" , 18);
	
	ofstream fout("person.bin", ios::binary);
	fout.write(reinterpret_cast<char*>(&p1) , sizeof(p1));
	fout.close();
	cout<<"object written to file successfully"<<endl;
	
	person p2(" " , 0);
	ifstream fin("person.bin" ,  ios::binary);
	fin.read(reinterpret_cast<char*>(&p2), sizeof(p2));
	fin.close();
	
	cout<<"data read from binary file"<<endl;
	
	cout<<"Name :"<< p2.name<< endl;
	cout<<"Age :"<< p2.age <<endl;
	
	return 0;
	
	
}
