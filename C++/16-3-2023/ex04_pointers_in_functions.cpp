#include <iostream>




using namespace std;

void changeVar(int Variable){
	Variable=9999; //Creates a local int variable and it changes //
					//the value of that copy..
};

void changeP(int* Pointer){
	*Pointer=9999; //Changing the content of that memory location..
};

int main(){
	
	int *newPoint = new int;
	
	*newPoint=10;
	changeP(newPoint);
	cout<< *newPoint << endl;
	
	int VariableX=10;
	changeVar(VariableX);
	cout << VariableX  << endl;
	
	delete newPoint;
	
	
	
	return 0;
}
