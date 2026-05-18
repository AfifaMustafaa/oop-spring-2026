#include<iostream>
#include<fstream>
using namespace std;
int main(){
	string st;
	int count = 0;
	int i;
	
	cout<<"type any sentence!"<<endl;
    getline(cin , st);
	
	for(i=0 ; st[i]!= '\0' ; i++){
		count = count + 1;
		
	}
	cout<<"the length of string is :"<<count<<endl;
	
	ofstream out("output.txt");
	out<<st;
	out.close();
	
	ifstream in("output.txt");
	getline(in , st);
	in.close();
	
	return 0;
	
}
