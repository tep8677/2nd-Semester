#include <iostream>

using namespace std;

class Student{
	private:
		int id;
		string name;
		string surname;	
	public:
		Student(string newName,string newSurname){
			name=newName;
			surname=newSurname;
		};
		void inspectStudent(){
			cout << name << " "<< surname;	
		};
};


int main(){
	
	Student George("George","Wannabe");
	George.inspectStudent();
	
}
