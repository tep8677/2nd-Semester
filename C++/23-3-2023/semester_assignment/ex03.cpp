#include <iostream>


using namespace std; 


void prakseis(int numOne,int numTwo){
	cout << numOne << '+' << numTwo << '=' << numOne+numTwo <<endl;
	cout << numOne << '-' << numTwo << '=' << numOne-numTwo <<endl;
	cout << numOne << '*' << numTwo << '=' << numOne*numTwo <<endl;
	
	if (numTwo==0){
		cout << numOne << '/' << numTwo << '=' << "Diaresh me 0" <<endl;
	} //den diairoume me to 0! :)
	else{
		cout << numOne << '/' << numTwo << '=' << numOne/float(numTwo) <<endl;
	};
};


int main (){

	int numOne,numTwo; //arxikopoihsh twn metavlhtwn pou tha xrhsimopoihthoun
	cout << endl << "Dwse ton prwto arithmo:";
	cin >> numOne; //nea timh ston numOne
	cout << endl  << "Dwse ton deytero arithmo:" ;
	cin >> numTwo; //nea timh ston numTwo
	prakseis(numOne,numTwo);
	
	return 0;
}
