#include <iostream>

using namespace std;

void fun1 (int a,int b, char action){
	
	if (action=='+')cout << a << "+" << b << "=" << a+b << endl;
	else if (action=='-')cout << a << "-" << b << "=" << a-b << endl;
	else if (action=='*')cout << a << "*" << b << "=" << a*b << endl;
	else if (action=='/')cout << a << "/" << b << "=" << a/b << endl;
}

void fun2 (int a,int b, char action){
	
	switch(action){
	case('+'):cout << a << "+" << b << "=" << a+b << endl;
	case('-'):cout << a << "-" << b << "=" << a-b << endl;
	case('*'):cout << a << "*" << b << "=" << a*b << endl;
	case('/'):cout << a << "/" << b << "=" << a/b << endl;
	default:cout << "error" << endl;
	}
}

int main(){
	int a,b,c;
	a=5;
	b=2;
	
	fun2(a,b,'-');
	//
	c=a+b;
	cout << a << "+" << b << "=" << c << endl ;
	
	//
	c=a-b;
	cout << a << "-" << b << "=" << c << endl;
	
	//
	c=a*b;
	cout << a << "*" << b << "=" << c << endl;
	
	//
	c=a/b;
	cout << a << "/" << b << "=" << c << endl;
	
	//Casting like in C.
	float d;
	d=a/(float)b; //treats b like a float. If it was int/int it would return an int. int/float => float
	cout << d << endl;
	
	
	
	//Getting input from keyboard
//	cout << "enter a value for a: ";
//	cin >> a;
//	cout << "enter a value for b: ";
//	cin >> b;
//	cout << a/(float)b;
//	
	//Checking out alphanumerics
	
	string inp1;
	string inp2;
	cout << "enter your text:";
	cin >> inp1;
	cout << inp1 << endl; //We notice that if we input a string that has spaces e.g. "Hello World" we get => "Hello" only.
	cin >> inp2;
	cout << inp2 << endl;
	
	
	//Getting correctly alphanumerics
	
	cout << "enter text correctly:";
	fflush(stdin); //clearing keyboard buffer
	
	string msg;
	getline(cin,msg); // not treating spaces as enter
	cout << msg;
	
	return 0;
}



