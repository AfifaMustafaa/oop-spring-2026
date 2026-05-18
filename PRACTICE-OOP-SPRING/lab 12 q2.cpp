#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string st;
	
	ofstream fout ("source.txt");
	cout<<"describe your day<3"<<endl;
	getline(cin , st);
	fout << st << endl;
	fout.close();
	
	ifstream a("source.txt");
	if(!a.is_open()){
		cout<<"cannot open file"<<endl;
	}
	
	ofstream b("destination.txt");
	while(getline(a , st)){

	
	b<<st<<endl;	}
	
	a.close();
	b.close();
	
	ifstream check("destination.txt");
	cout<<"copied content in the destination file is: "<<endl;
	while(getline(check , st)){
		cout<<st<<endl;
		
	}
	check.close();
}
