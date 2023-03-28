#include <iostream>

using namespace std;

class Person{
	private:
		string name;
		int age;
	public:

		Person(){
			name="George";
			age=54;			
		};
		Person(string n, int a){
			name=n;
			age=a;			
		};
		
		void showDetails(){
			cout << name << endl;
			cout << age << endl;
		};
		
};


void PersonDetails(Person* objRef){
	objRef->showDetails();
};

int main(){
	Person George;
	PersonDetails(&George);
	
	
	return 0;
};
