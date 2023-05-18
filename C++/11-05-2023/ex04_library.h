#include <iostream>

using namespace std;

class Person{
	private:
		string name;
		string surname;
		string address;
		string mobile;
	public:
	
		Person(){};
		Person(string,string,string,string);
	
		void setName(string);
		void setSurname(string);
		void setAddress(string);
		void setMobile(string);
		
		string getName(void);
		string getSurname();
		string getAddress();
		string getMobile();

};


class xyz{
	private:
		string name;
	public:
		void setName(string);
};

void Person::setName(string name){
	this->name=name;
}
void Person::setSurname(string surname){
	this->surname=surname;
}
void Person::setAddress(string address){
	this->address=address;
}
void Person::setMobile(string mobile){
	this->mobile=mobile;
}

string Person::getName(){
	return this->name;
}
string Person::getSurname(){
	return this->surname;
}

string Person::getAddress(){
	return this->address;
}

string Person::getMobile(){
	return this->mobile;
}


Person::Person(string name,string surname,string address,string mobile){
	this->name=name;
	this->surname=surname;
	this->address=address;
	this->mobile=mobile;
};
