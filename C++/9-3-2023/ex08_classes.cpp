#include <iostream>

using namespace std;

//declaring our new data type outside of main()
class MyClass{
	public:
		int myNum;
		string myString;
		void printObj(){
			cout << myString << endl;
			cout << myNum << endl;
		};
};


void printObj(MyClass Obj){
	Obj.printObj();
};

int main(){
	
	MyClass myObj;
	myObj.myNum=21;
	myObj.myString="Hello?";
	
	cout << myObj.myString << endl;
	
	//myObj.printObj();
	printObj(myObj);
	
	return 0;
}
