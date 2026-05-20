#include<iostream>
#include<map>
#include<string>
using namespace std;
 
 void displayall(map<string , float> m){
 	if(m.empty()){
 		cout<<"No students found!"<<endl;
	 }
 	cout<<"-----STUDENT GRADES-----"<<endl;
 	map<string , float>::iterator it;
 	for(it=m.begin(); it!=m.end() ;it++){
 		cout<<"Name: "<<it->first<<"Grades :"<<it->second<<endl;
	 }
 }
 void retrievegrade(map<string , float> m){
 	string name;
 	cout<<"Enter the name of the student: "<<endl;
 	cin>>name;
 	if(m.find(name) !=m.end()){
 		cout<<"Grade of "<<name<< " is "<<m[name]<<endl;
	 }
	 else{
	 	cout<<"name not found! "<<endl;
	 }
 	
 }
 void updategrade(map<string , float> m){
 	string name;
 	float newgrade;
 	
 	cout<<"enter the name of student whom you want to update :"<<endl;
 	cin>>name;
 	if(m.find(name) !=m.end()){
 		cout<<"enter the upgraded grade :"<<endl;
 		cin>>newgrade;
 		m[name] = newgrade;
	 }
	 else{
	 	cout<<"the name you entered is not found!"<<endl;
	 	
	 }
	 cout<<name<<"'s grade updated! "<<endl;
 	
 	
 	
 }
