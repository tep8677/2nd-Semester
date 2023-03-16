#include <iostream>

using namespace std;

int main(){
	
	int* coolPointer = new int;
	cout << coolPointer << endl;
	
	*coolPointer = 10;
	cout << coolPointer << endl;
	
	*coolPointer = 20;
	cout << coolPointer << endl;
	
	return 0;
}
