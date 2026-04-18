#include<iostream>
using namespace std;
class animal{
	public:
	virtual void makesound() const = 0;
	
	void eat(){
		cout<<"is eating"<<endl;
	}
};
class Dog: public animal{
	public:
	void makesound() const override{
	cout<<"bhau bhau bhau"<<endl;
	}	
};
class Cat:public animal{
	public:
	void makesound()const override{
	cout<<"me e e e u"<<endl;
	}
}; 


int main(){
	Dog dog;
	Cat cat;
	dog.makesound();
	dog.eat();

	cat.makesound();
	cat.eat();
}
