#include <iostream>
#include <string>
using namespace std;
class MyClass { 
 
 private: 
 
	float myNum1;
	float myNum2;
	string myString;
	float mo;
 public:
	MyClass(){
		myNum1=5;
		myNum2=6;
		mo=0;
		myString= "Kostas";
	 }
	 MyClass(const MyClass &s){
		myNum1=s.myNum1;
		myNum2=s.myNum2;
		mo=s.mo;
		myString=s.myString;
	 }
	 MyClass mesosoros(){
		return *this;
	 }
	 void Display(){
	 	cout<<mo<<endl<<myString<<endl;
	 }
};

int main() {
	 MyClass k;
	 MyClass z(k.mesosoros());
	 z.Display();
	 return 0;
}
