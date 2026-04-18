#include<iostream>
using namespace std;
class Bank{
	private:
		int bankbalance = 0;
	public:
	 int getbalance(){
	 	return bankbalance;
	 }
	int setbalance(int b){
		bankbalance = b;
		return 0;
	}
		 	
};
int main(){
  Bank customer;
  customer.setbalance(170000);
  cout<<"balance available = "<<customer.getbalance()<<endl;

return 0;

}
