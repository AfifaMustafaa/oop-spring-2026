#include<iostream>
using namespace std;
template <typename t >
class mycontainer{
	public:
		t increase(t val){
			return val+1;
		}
};
template<>
class mycontainer<char>{

  public:
  	char uppercase(char val){
  		return toupper(val);
	  }};
int main(){
	mycontainer<int>obj1;
	cout<<"the increased value :" <<obj1.increase(4)<<endl;
	
	mycontainer<float>obj2;
	cout<<"the increased value : "<<obj2.increase(7.8)<<endl;
	
	mycontainer<char>obj3;
		cout<<"the upper case letter is : "<<obj3.uppercase('a')<<endl;
		
		return 0;
}	  
	  
