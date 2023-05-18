#include <iostream>

using namespace std;

//Declarations
class Person{
	private:
		string name;
		string surname;
		string address;
		string mobile;
	public:
		Person(string,string,string,string);
		
		void setName(string);
		void setSurname(string);
		void setAddress(string);
		void setMobile(string);
		
		string getName(void);
		string getSurname(void);
		string getAddress(void);
		string getMobile(void);
		
		void printMe();
		
	
};

class Employee:public Person{
	private:
		int salary;
	public:
		Employee(string,string,string,string,int);
		
		int getSalary();
		void printMe();
};


//Definitions


Person::Person(string name,string surname,string address,string mobile){
	this->name=name;
	this->surname=surname;
	this->address=address;
	this->mobile=mobile;
}

void Person::setName(string name){
	this->name=name;
};
void Person::setSurname(string surname){
	this->surname=surname;
};
void Person::setAddress(string){
	this->address=address;
};
void Person::setMobile(string mobile){
	this->mobile=mobile;
};
		
string Person::getName(void){
	return this->name;
};
string Person::getSurname(void){
	return this->surname;
};
string Person::getAddress(void){
	return this->address;
};
string Person::getMobile(void){
	return this->mobile;
};


Employee::Employee(string name,string surname,string address,string mobile,int salary)
	:Person(name,surname,address,mobile){
		this->salary=salary;
	}
		
int Employee::getSalary(){
		return this->salary;
	}
	
	
void Person::printMe(){
	cout << this->name << endl
	<< this->surname << endl
	<< this->address << endl
	<< this->mobile << endl;
}

void Employee::printMe(){
	Person::printMe();
	cout << this->salary << endl;
}
