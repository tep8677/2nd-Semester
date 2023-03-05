#include <iostream>

using namespace std; 


int main (){
	
	bool bool1=true;
	bool bool2=false;
	
	int a = 9;
	int b = 4;
	
	cout << a << " > " << b << " = " << (a>b) << endl; // the comparison needs to be inside parenthesis if we continue with '<<'
	cout << a << " < " << b << " = " << (a<b) << endl;
	cout << a << " == " << b << " = " << (a==b) << endl;
	cout << a << " <= " << b << " = " << (a<=b) << endl;
	cout << a << " >= " << b << " = " << (a>=b) << endl;
	cout << a << " != " << b << " = " << (a>=b) << endl;
	
	cout << bool1 << " and " << bool2 << " = " << (bool1 and bool2) << endl;
	cout << bool1 << " or " << bool2 << " = " << (bool1 or bool2) << endl;
	cout << "not " << bool1 << " = " << (not bool1) << endl;
	cout << "not " << bool2 << " = " << (not bool2) << endl;
	
	return 0;
}
