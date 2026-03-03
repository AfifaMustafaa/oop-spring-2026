#include <iostream>
using namespace std;
class bankaccount{
	private:
		float balance;
	public:
		bankaccount(){
			balance = 0;
		}
	   void deposit(float amount){
	   	  balance += amount;
	  	
	  }	
	  
	  void withdrawl(float amount){
	  	if(amount<=balance)
	  	
	  	balance-=amount;  
	  }
	  
	  void display(){
	  
	  cout<<"balance: "<<balance<<endl;}
};
int main(){
	bankaccount acc;
	
	acc.deposit(1000);
	acc.withdrawl(800);
	acc.display();
	
	return 0;
}
