#include <iostream>
#include "ex04_library.h"


using namespace std;

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



