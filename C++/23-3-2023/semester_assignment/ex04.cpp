//Exercise 04


#include <iostream>


using namespace std;

void numberInfo(int givenNumber){
	if (givenNumber>0){
		cout << endl << "O arithmos einai 8etikos";
	}
	else if(givenNumber<0){
		cout << endl << "O arithmos einai arnhtikos";
	}
	else cout <<endl << "O arithmos einai to mhden";
	
};


int main(){
	
	int newNumber;
	
	cout << "Dwse arithmo:";
	cin >> newNumber;
	
	numberInfo(newNumber);
	
	
	return 0;
}
