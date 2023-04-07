#include <iostream>

using namespace std;

class Person{
	private:
		string name;
		string surname;
	public:
		Person(string,string);
		
		void setName(string);
		void setSurname(string);
		
		string getName();
		string getSurname();	
	
};

int main(){
	
	Person Jason("Jason","Anderson");
	cout << Jason.getName() << endl;
	
	return 0;	
};




	Person::Person(string name,string surname){
		this->name=name;
		this->surname=surname;
	};
	
	
	void Person::setName(string name){
		this->name=name;
	};
	void Person::setSurname(string surname){
		this->surname=surname;
	};
		
		
	string Person::getName(){
		return this->name;
	};
	string Person::getSurname(){
		return this->surname;
	};
