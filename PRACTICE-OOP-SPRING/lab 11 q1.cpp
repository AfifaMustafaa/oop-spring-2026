#include<iostream>
using namespace std;
int main(){
	string username;
	string password;
	cout<<"\t\t-------------\n"<<endl;
	cout<<"\t\tLOGIN DETAILS\n"<<endl;
	cout<<"\t\t-------------\n"<<endl;
	
	cout<<"Enter username :"<<endl;
	cin>>username;
	try{

	cout<<"Enter password :"<<endl;
	cin>>password;	

	if(password.length() < 6){

		
	throw((int)password.length());	}
	
	cout<<"login succesful :)"<<endl;
	
	
	}
	
	catch(int len){
		cout<<"ERROR!! entered password only contain "<< len <<" digits."<<endl;
		cout<<"password must contain at least 6 digits"<<endl;
	}
	
	
	
	
	
}
