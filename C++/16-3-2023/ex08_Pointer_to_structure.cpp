#include <iostream>

using namespace std;

struct Person{
	string name;
	int age;
};

int main(){
	
	//How to declare a pointer to a Structure
	//Δείκτης σε δομή
	
	Person* p = new Person;
	
	//in non-Pointers we use p.name
	p->name="John";
	
	//in Pointer structures we use p->name
	p->age = 25;
	
	cout << "Name: "<<p->name << " \\ Age: "<< p->age;
	
	delete p;
	return 0;
};
