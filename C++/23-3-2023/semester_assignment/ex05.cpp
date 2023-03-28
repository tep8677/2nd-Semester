#include <iostream>

using namespace std;


void printString(int N,string S){
	for(int i=0;i<N;i++){
		cout << S << endl;
	};
};
int main(){
	
	string myString;
	int myNum;
	
	
	cout << "Give string:" ;
	getline(cin,myString);
	cout << endl << "Give me number:";
	cin >> myNum;
	cout << endl;
	
	printString(myNum,myString);
	
	
	return 0;
}
