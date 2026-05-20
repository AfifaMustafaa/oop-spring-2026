#include<iostream>
#include<queue>
#include<string>
using namespace std;
 int main(){

 queue<string> printerqueue;
 
 printerqueue.push("job_A");
 printerqueue.push("job_B");
 printerqueue.push("job_C");
 printerqueue.push("job_D");
 
 cout<<"print jobs added succesfuly"<<endl;
 
 while(!printerqueue.empty()){
 	cout<< "printing :" <<printerqueue.front()<<endl;
 	
 	printerqueue.pop();
 	
 	if(!printerqueue.empty()){
 		cout<<"Next job :"<<printerqueue.front()<<endl;
	 }
	 
	 else{
	 	cout<<"printer is idle!"<<endl;
	 }
      cout<<"------------------"<<endl;                          }
      
      cout<<"All print jobs are done! "<<endl;
      
      return 0;
 
  }
