#include <iostream>
using namespace std;
class number{
	public:
		int val ;
		number(int v = 0){
			val = v;
		}
		
		number operator+(number &obj){
			number temp;
			temp.val = val + obj.val;
		}
		
		friend ostream& operator<<(ostream& out , number const &obj){
			out<<obj.val;
			return out;
		}
};
int main(){
	number n1(43);
	number n2(57);
	
	number n3 = n1 + n2;
	
	
	cout<<"n1 :"<<n1<<endl;
	cout<<"n2 :"<<n2<<endl;
	
	cout<<"the addition is :"<<n3<<endl;
	return 0;
	
}

