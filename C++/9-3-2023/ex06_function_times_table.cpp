#include <iostream>

using namespace std;

string myBar(){
	return "================\n";
}

void propedia(int k){
	cout << myBar();
	cout << "propedia tou "<< k <<":" << endl;
	cout << myBar();
	for (int i=1;i<=10;i++){
		
		cout << k << "*" << i<< "=" << k * i  <<endl;
	};
	
}



int main(){
	
	for(int i=1;i<=10;i++){
		propedia(i);
	};
	
	
	cout << myBar();
	return 0;
}
