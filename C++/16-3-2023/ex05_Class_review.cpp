#include <iostream>

using namespace std;

class Person{
	private:
		string name;
		string surname;
		string address;
		string phone;
		string mobile;
	public:
		Person(string a,string b,string c,string d,string e){
			name=a;
			surname=b;
			address=c;
			phone=d;
			mobile=e;
		};
		void Display(){
			cout << name << endl;
			cout << surname << endl;
			cout << address << endl;
			cout << phone << endl;
			cout << mobile << endl;
		};
};



int main(){
	
	Person Sara("Sara","Isabael","Athens","2105140","698023");
	Sara.Display();
	
	return 0;
};
