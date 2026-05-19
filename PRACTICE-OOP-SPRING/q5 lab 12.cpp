#include<iostream>
#include<fstream>
using namespace std;
  void countlines(){
	  
  	ifstream fin("STORY.TXT");
  	if (!fin) {
        cout << "Error: Could not open STORY.TXT" << endl;
        return;
    }
  	string line;
  	int count = 0;
  	while(getline(fin , line)){
  		if(line[0] !='A'&& line[0] != 'a')
		  
  		count++;
	  }
	  cout<<"the total lines of the story file not starting with A or a are :"<<count<<endl;
	  fin.close();
  	
  	
  	
  }
int main(){
	countlines();
}

