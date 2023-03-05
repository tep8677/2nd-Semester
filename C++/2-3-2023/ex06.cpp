#include <iostream>

using namespace std;

void showHello (){
	for (int i=0;i<10;i++){
		cout << " hello world !" << endl;
	}
}

void showMsgTimes(string msg,int n){
	for (int i=0;i<n;i++){
		cout<<i<<": "<<msg<<endl;
	}
}


int retInt(int a){
	return a;
}

int main () {


	//for(int i=0;i<10;i++) cout << "hello!" << endl;

	//showHello();
	
	//showMsgTimes("hello world !", 13);
	
	retInt(5);
	//cout << retInt(5);
	int num1=retInt(5);
	cout << num1;
	
	
	return 0;
}
	
	
