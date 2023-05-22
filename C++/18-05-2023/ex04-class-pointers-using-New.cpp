#include <iostream>

using namespace std;

class Student{
	private:
		string name;
	public:
		Student(string name){
			this->name=name;
			cout << "Creating " << this->name << "." << endl;
		}
		
		string getName(){
			return this->name;
		}
		
		~Student(){	
			cout << "Deleting " << this->name << "." << endl;
		}
		
};

int main(){
	
	Student *George=new Student("George");
	
	cout << "My name is: " << George->getName() << "." << endl ;
	
	
	delete George;
	return 0;


}
