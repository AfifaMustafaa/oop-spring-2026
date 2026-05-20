#include<iostream>
using namespace std;

template <typename t1, typename t2 ,  typename t3>
   t3 add(t1 a , t2 b){
   	return a + b;
   }
   template <typename t1, typename t2 ,  typename t3>
   t3 subtract(t1 a , t2 b){
   	return a-b;
   }
   template <typename t1, typename t2 ,  typename t3>
   t3 multiply(t1 a, t2 b){
   	
   	return a * b;
   	
   }
   template <typename t1, typename t2 ,  typename t3>
   t3 divide(t1 a , t2 b){
   	if(b== 0){
   		cout<<"denominator cant be zero!"<<endl;
	   }
	   else{
	   	return a/ b;
	   }
   }
   
int main(){
	cout<<add<int , float , float>(2 , 5.7)<<endl;
	cout<<subtract<int , float , float>(2 , 5.7)<<endl;
	cout<<multiply<int , float , float>(2 , 5.7)<<endl;
	cout<<divide<int , float , float>(5 , 2)<<endl;
	
	
	
	return 0;
}   
