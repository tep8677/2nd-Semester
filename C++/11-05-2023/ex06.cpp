#include <iostream>

using namespace std;

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
		
	
};

class Employee:public Person{
	private:
		int salary;
	public:
		Employee(string,string,string,string,int);
		
		int getSalary();
};

int main(){
	
	Person John("John","Foobar","Greece","123123");
	Employee Bob("Bob","Barfoo","England","1412412",5400);
	
	
	cout << John.getName() << endl;
	cout << Bob.getSalary() << endl;
	
	
	return 0;
};


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
