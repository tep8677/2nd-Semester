#include <iostream>

using namespace std;

int main(){
	int *ptr = new int;
	int *P2 = new int;
	
	*ptr = 10;
	
	cout << "Content is: " << *ptr << ". Memory location is: " << &ptr << endl;
	
	P2=ptr; // making P2 point to ptr
	
	cout << "Content of P2: " << *P2 << endl;
	cout << "MemoryLoc of P2: " << &P2 << endl;
	
	//deleting pointers // cleaning memory
	
	
	delete ptr;
	cout << "After deletion!!!" << endl;
	cout << "Content of P2: " << *P2 << endl;
	cout << "MemoryLoc of P2: " << &P2 << endl;
	cout << "MemoryLoc of ptr: " << &ptr << endl;
	cout << "Content of ptr: " << *ptr << endl;
	
	//delete ptr; deleting twice will exit with error
	
	//delete P2; calling completely deleted pointers will exit with errors

	/*
	cout << "After deletion of both!!!" << endl;
	cout << "Content of P2: " << *P2 << endl;
	cout << "MemoryLoc of P2: " << &P2 << endl;
	cout << "MemoryLoc of ptr: " << &ptr << endl;
	cout << "Content of ptr: " << *ptr << endl;
	*/
	
	
	
}
