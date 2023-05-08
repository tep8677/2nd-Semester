#include <iostream>
#include "myTemplate01.h"


using namespace std;

int main(){
	
	cout << sum<int,float,double,int,double>(45,0.12,99.123,11) << endl;
	cout << sub<int,int,int,float,float>(66,23,97,3.45) << endl;
	
	return 0;
}
