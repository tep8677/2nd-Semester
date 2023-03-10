#include <iostream>

using namespace std;

int main(){
	const int newNum=10;
	//newNum=15; => Error, newNum is readOnly.
	cout << newNum;
	return 0;
}
