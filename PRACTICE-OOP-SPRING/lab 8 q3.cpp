#include<iostream>
using namespace std;
class character{
	public:
	string name;
	int level;
	float health;
	
	public:
		character(string n, int l, float h){
			name = n;
			level = l;
			health = h;
		}
	
	void display(){
		cout<<"Name :"<<name<<endl<<"Level :"<<level<<endl<<"Health :"<<health<<endl;
	}
	
	
	
};
class warrior:public character{
	int strength;
	int meleeprof;
	public:
		warrior(string n, int l, float h, int str, int mel):character(n,l, h), strength(str), meleeprof(mel){
		}
		
	void slash(){
		cout<<name<<" uses slash!"<<endl;
	}
	
	
};
class mage:public character{
	int intelligence;
	int spellprof;
	public:
		mage(string n, int l, float h, int inte , int spl):
			character(n , l, h),intelligence(inte) , spellprof(spl){
			}
			void fireball(){
				cout<<name<<" cast fireball!"<<endl;
			}
};
class archer:public character{
int dexterity;
int rangewepprof;
   public:
   	archer(string n, int l, float h, int dex ,  int rng):
   		character(n , l, h), dexterity(dex) , rangewepprof(rng){
		   }
		   void rapidshot(){
		   	cout<<name<<" uses rapid shot!"<<endl;
		   	
		   }
	
};

class NPC : public character{
	public:
	string movementpatt;
	NPC(string n, int l, float h, string pattern) 
        : character(n, l, h), movementpatt(pattern) {}
        
        void dialouge(){
        	cout<<name<<" says : welcome to the village!!"<<endl;
		}
	
};
class mighty:public warrior,public mage{
	public:
	mighty(string n, int l, float h, int str, int mel, int inte, int spl)
        : warrior(n, l, h, str, mel) , 
          mage(n, l, h, inte, spl) {}
	
};
int main(){
	mighty hero("yakuza", 67 , 9.8 , 99 ,78, 34, 45);
	NPC n1("yaya", 3 , 98, "wandering");
	
	n1.dialouge();	
	hero.slash();
	hero.fireball();
	
}
