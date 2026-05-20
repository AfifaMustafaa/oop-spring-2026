#include<iostream>
#include<vector>
using namespace std;
class stac{
	public:
		vector<char> v;
		void push(char c){
			v.push_back(c);
			
		}
		
		void pop(){
			if(!v.empty()){
				v.pop_back();
			}
			else{
				cout<<"the stack is empty"<<endl;
			}
			
			
		}
		char peek(){
			if(!v.empty()){
				 return v.back();
			}
			else{
				cout<<"the stack is empty"<<endl;
			}
			return '\0';
		}
		bool isEmpty(){
			return v.empty();
		}
		void reverse(string sentence){
			for(int i=0 ; i<=sentence.length() ; i++)
			{
				if(i<sentence.length() && sentence[i]!= ' '){
					push(sentence[i]);
					
					
				}else{
					while(!v.empty()){
					
					cout<< peek();
					
			             pop();	}
				      cout<<" ";}
				      
						
				}
		cout<<endl;	}
		
};
int main(){
	stac s;
	string sentence;
	
	cout<<"enter a sentence"<<endl;
	getline(cin , sentence);
	
	s.push('A');
	s.push('B');
	s.push('C');
	cout<<" peek char is :"<<s.peek()<<endl;
	s.pop();
	
	cout<<" peek char after pop is :"<<s.peek()<<endl;
	
	s.reverse(sentence);	
}


