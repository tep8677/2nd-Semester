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

// void setName(string){} //whose setName?

int main(){

	Person George;
	
	//Setting
	George.setName("George");
	George.setSurname("Foobar");
	George.setAddress("Athens");
	George.setMobile("210210210");
	
	//Getting
	cout << George.getName() << endl;
	cout << George.getSurname() << endl;
	cout << George.getAddress() << endl;
	cout << George.getMobile() << endl;
	
	cout << endl;
	//Checking if everything works
	Person John("John","Barfoo","Salonika","1111111");
	cout << John.getName() << endl;
	cout << John.getSurname() << endl;
	cout << John.getAddress() << endl;
	cout << John.getMobile() << endl;
	
	return 0;
}


Person::Person(string name,string surname,string address,string mobile){
	this->name=name;
	this->surname=surname;
	this->address=address;
	this->mobile=mobile;
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
