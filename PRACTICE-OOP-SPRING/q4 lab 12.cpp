#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class participant{
	public:
	int id;
	char name[50];
	float score;
	
	
	void input(){
	cout<<"Enter your id :"<<endl;
	cin>>id;
	cout<<"Enter your name :"<<endl;
	cin>>name;
	cout<<"Enter your score :"<<endl;
	cin>>score;
	
	ofstream fout("participant.dat" , ios::binary |ios::app);
	
	if(fout){

	fout.write((char*)this , sizeof(*this));
	cout<<"data added to the file succesfully"<<endl;
		}
	fout.close();
	
 }
   void output(){
   	int ID;
   	cout<<"Enter the id you want to search :"<<endl;
   	cin>>ID;
   	
   	
   	ifstream fin("participant.dat" , ios::binary );
   	 if(fin){
   	 	
   	bool found = false;
   	 	while(fin.read((char*)this , sizeof(*this))){
			if(ID == id){
				cout<<"Name :"<<name<<endl;
				cout<<"id :"<<id<<endl;
				cout<<"score :"<<score<<endl;
				found = true;
				break;
   	 		
			}
			
				}
				
				
				if(!found){
				cout<<"coudnt find the id! "<<endl;
			
		
			}
   	
   		}
   	
  	fin.close(); }
  	
  	void max(){
  			ifstream fin("participant.dat" , ios::binary );
  		participant temp ;
  		participant max_score;
  		max_score.score=-1;
  		
   
   	if(fin){
   			while(fin.read((char*)&temp , sizeof(temp))){
   				if(temp.score>max_score.score){
   					max_score = temp;
				   }
   				}
   		if(	max_score.score == -1){
   			cout<<"No records found!"<<endl;
   			
		   }
		else{
			cout<<"the highest scoring participant is :"<<endl;
			cout<<"Name :"<<max_score.name<<endl;
			cout<<"ID :"<<max_score.id<<endl;
			cout<<"Score :"<<max_score.score<<endl;
			
		}   
   		fin.close();
   		}}};
int main(){
	participant p;
    p.input();
    p.output();
    p.max();
	
	return 0;
}
