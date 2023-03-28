#include <iostream>

using namespace std;

class newObject{
	private:
		string name;
		int age;
	public:
		newObject(){
			name="Jason";
			age=24;	
		};

		newObject(const newObject &objRef){ 
		//if we don't use const here we make a loop that deletes the name and age of the first obj?
			name=objRef.name;
			age=objRef.age;
		};
		newObject returnObject(){
			return *this;
		};
		void getObject(){
			cout << name << endl << age << endl;
		};
};


///Comment this function to make the programm work.
void getObject (const newObject &objRef){
	cout << objRef.name << endl << objRef.age << endl;
};


int main (){
	newObject Jason;
	
	newObject Jason2(Jason.returnObject());
	
	Jason2.getObject();
	
	getObject(Jason.returnObject());




return 0;
};
