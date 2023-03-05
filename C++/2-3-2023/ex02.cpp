#include <iostream>

using namespace std;

int main (){
	
	int a=3,b=5,c=8;
	
	float d1=1.2;
	
	a+=3; // a = a+3
	b-=3; // b = b-3
	c*=2; // c = c * 2 
	d1 /=2; //d1 = d1 /2 
	
	
	cout 
	<< "a+=3 :" << a << endl
 	<< "b-=3 :" << b  << endl
	<< "c*=2 :" << c << endl
	<< "d1/=2 :" << d1 << endl << endl << endl;
	
	
	a=5;
	
//	cout
//	<< "a = " << a << endl
//	<< "a++ =" << a << a++ << a++ << endl
//	<< "a = " << a << endl
//	<< "++a = " << ++a << endl
//	<< "a-- = " << a-- << endl
//	<< "a = " << a << endl
//	<< "--a = " << --a << endl << endl;
	

	cout << a << a++ << a++ << a << endl;	
	
	b=6;
	
	cout 
	<<"b="<<b++ <<endl;
	cout << "b= "<<b;
	return 0;
}
