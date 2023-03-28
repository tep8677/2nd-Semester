#include <iostream>

using namespace std;

class Person{
	private:
		string name;
		string surname;
		string address;
		string phone;
	public:
		void setName(string n){
			name=n;
		};
		void setSurname(string s){
			surname=s;
		};
		void setAddress(string a){
			address=a;
		};
		void setPhone(string p){
			phone=p;
		};
		string getName(){
			return name;
		};
		string getSurname(){
			return surname;
		};
		string getAddress(){
			return address;
		};
		string getPhone(){
			return phone;
		};
		void printMe(){
			cout 
			<< name << endl 
			<< surname << endl 
			<< address << endl 
			<< phone << endl;
		};

		
};

int main(){

	Person Jason;
	Person* JasonPtr=&Jason;
	JasonPtr->setName("Jason");
	JasonPtr->setSurname("Newman");	
	JasonPtr->setAddress("Athens");
	JasonPtr->setPhone("6912345667");
	
	cout 
	<< JasonPtr->getName() << endl 
	<< JasonPtr->getSurname() << endl 
	<< JasonPtr->getAddress() << endl 
	<< JasonPtr->getPhone() << endl << endl;
	
	Jason.printMe();
	
	
	return 0;	
};
