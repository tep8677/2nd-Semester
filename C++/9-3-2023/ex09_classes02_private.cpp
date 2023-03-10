#include <iostream>

using namespace std;

//declaring our new data type outside of main()
class MyClass{
	private:
		int myNum;
		string myString;

	public:
		void setNum(int n){
			myNum=n;
		};
		void setString(string s){
			myString=s;
		};
		int retMyNum(){
			return myNum;
		};
		string retMyString(){
			return myString;
		};
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
	myObj.setNum(21);
	myObj.setString("Hello?");
	
	cout << myObj.retMyString() << endl;
	
	//myObj.printObj();
	printObj(myObj);
	
	return 0;
}
