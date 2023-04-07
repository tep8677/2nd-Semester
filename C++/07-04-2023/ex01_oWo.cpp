#include <iostream>

using namespace std;

class Animal{
	protected:
		int age;
	public:
		Animal(int age){
			this->age=age;
		};
		void getInfo(){
			cout << this->age << endl;
		};
};

class Feline:public Animal{
	protected:
		string species;
	public:
		Feline(string species,int age):Animal(age){
			this->species=species;
		};
		void getInfo(){
			Animal::getInfo();
			cout << this->species << endl;
		};
};

int main(){
	
	Feline Cat("Cat",24);
	Cat.getInfo();
};
