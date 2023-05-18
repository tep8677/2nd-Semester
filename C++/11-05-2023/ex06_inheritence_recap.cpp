#include <iostream>
#include "ex06_function_definitions.h"

using namespace std;

int main(){
	
	Person John("John","Foobar","Greece","123123");
	Employee Bob("Bob","Barfoo","England","1412412",5400);
	
	
	cout << John.getName() << endl;
	cout << Bob.getSalary() << endl;
	
	cout << endl;
	Bob.printMe();
	
	
	return 0;
};

