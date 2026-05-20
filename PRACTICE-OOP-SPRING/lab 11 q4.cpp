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
 		 cout<<name<<"'s grade updated! "<<endl;
 	
	 }
	 else{
	 	cout<<"the name you entered is not found!"<<endl;
	 	
	 }
	 }
	 
	 void deletegrade(map<string , float> m){
	 	string name;
	 	cout<<"Enter name of the student you want to delete: "<<endl;
	 	cin>>name;
	 		if(m.find(name) !=m.end()){
	 			m.erase(name);
	 			cout<<"Student "<<name<<" deleted succesfully!"<<endl;
			 }
			 else{
			 	cout<<"student not found!"<<endl;
			 } }
 int main(){
 	map<string , float> students;
 	string name;
 	float grade;
 	int choice;
 	char more;
 	
 	cout<<"---ENTER STUDENT DETAIL---"<<endl;
 	do{
	
 	cout<<"Enter student name: "<<endl;
 	cin>>name;
 	cout<<"Enter student grade: "<<endl;
 	cin>>grade;
 	
 	if(grade<0 || grade >100){
 		cout<<"invalid! grade must be between 0 and 100"<<endl;
	 }
	 else{
	 	students[name]= grade;
	 	cout<<"The grade of the student "<<name<<" added successfully! "<<endl;
	 }
	 cout<<"do you want to add more students? (y/n)"<<endl;
	 cin>>more;
	  }
	  while(more == 'y'|| more =='Y');
	  
	  do{
	  	  
        cout << "\n=== MENU ===" << endl;
        cout << "1. Display all students" << endl;
        cout << "2. Retrieve a grade" << endl;
        cout << "3. Update a grade" << endl;
        cout << "4. Delete a student" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: displayall(students);    break;
            case 2: retrievegrade(students); break;
            case 3: updategrade(students);   break;
            case 4: deletegrade(students); break;
            case 5: cout << "Goodbye!" << endl; break;
            default: cout << "Invalid choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}
	  
 	
 	
 	
 	
 	
 	
 
