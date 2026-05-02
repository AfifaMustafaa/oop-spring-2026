#include<iostream>
using namespace std;
template<typename T ,  typename U>
class num{
	public:
	T val1;
	U val2;
   num(T a, U b){
   	val1= a;
   	val2=b;
   }

	T add(T  a ,U b){
		T result = a+b;
		return result;
	}
	T display(){
	
	cout<<result<<endl;}
};
int main{
num<int><float>sum(6 , 9.7);
sum.add;
sum.display;


return 0;
}

