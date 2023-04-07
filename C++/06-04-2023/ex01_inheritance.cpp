#include <iostream>

using namespace std;

class Animal{
	protected:
		int age;
		
	public:
		void Kingdom(){
			cout << "I belong to the Animal Kingdom!" << endl;	
		};
		void setAge(int a){
			age = a;
		};
		
	
};

class Feline:public Animal{
	public:
		void run(){
			cout << "I am a feline!" << endl;
			cout << age << endl;
		};
		
};


int main(){
	
	Feline Cat;
	Cat.setAge(24);
	Cat.run();
	Cat.Kingdom();
	
	return 0;
};

