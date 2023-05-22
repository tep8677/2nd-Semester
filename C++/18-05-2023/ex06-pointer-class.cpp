#include <iostream>

using namespace std;

class Student{
	private:
		int age;
		string name;
		string surname;
		
	public:
		Student(): age(20){}
		
		Student (int age): age(age){}
		
		Student (int x,string name,string surname):age(x),name(name),surname(surname){}
		
		int getAge(){
			return this->age;
		}
		
		string getName(){
			return this->name;
		}
		
		string getSurname(){
			return this->surname;
		}
		
		
		
};

int main(){
	
	
	Student *George= new Student(21,"George","Foo");
	
	cout << "Your age is: "<<George->getAge() << endl <<
	"Your name is: " << George->getName() << endl <<
	"Your surname is: " << George->getSurname() << endl;
	
	
	
	delete George;
	
	return 0;
};
