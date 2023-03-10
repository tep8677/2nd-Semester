#include <iostream>

using namespace std;


void numOut(int myNum);

void barDown(){
	cout << "^^^^^^^^^^^^^^^" ;
};

void barUp(){
	cout << "_______________" << endl;
}


int main(){


	int myNum;
	cout << endl << "Enter a 4 digit password:";
	cin >> myNum;
	numOut(myNum);
	
	
	return 0;
}


void numOut(int myNum){
	switch(myNum){
		case 4511:
			barUp();
			cout<<"Device unlocked";
			break;
		default:
			barUp();
			cout<<"Wrong Password!"<<endl;
			barDown();
			break;
	}
}
