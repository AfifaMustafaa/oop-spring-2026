#include<iostream>
using namespace std;
template<typename t1 , typename t2>
  void swap(t1 &a, t2 &b){
  	auto temp = a;
  	a = b;
  	b = temp;
  } 
 
 int main(){
 	int x = 5;
 	float y = 9.8f;
 	
 	
 	swap(x , y);
 	cout<<"x : "<<x<<endl<<"y : "<<y<<endl;
 }
