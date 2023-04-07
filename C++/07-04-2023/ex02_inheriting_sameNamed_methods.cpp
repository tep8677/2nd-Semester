#include <iostream>

using namespace std;

class A{
	public:
		void print(){
			cout << "I am A!" << endl;
		};
};


class B{
	public:
		void print(){
			cout << "I am B!" << endl;
		};
};

class C:public A,public B{
	public:
		void printMe(){
			cout << "I am C!" << endl;
		};
};

int main(){
	
	C ObjectC;
	
	ObjectC.printMe();
//	ObjectC.print();
	
	ObjectC.A::print();
	ObjectC.B::print();
	
	return 0;	
};
