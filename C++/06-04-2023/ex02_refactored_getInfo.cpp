#include <iostream>

using namespace std;

class Person{
	protected:
		string name;
		string surname;
		string address;
		string phone;
		string mobile;
		
	public:
		Person(
			string name,
			string surname,
			string address,
			string phone,
			string mobile
		){
			this->name=name;
			this->surname=surname;
			this->address=address;
			this->phone=phone;
			this->mobile=mobile;	
		};
		void getInfo(){
			cout << endl << 
			"Onoma			:"<<name << endl << 
			"Epwnymo			:"<<surname << endl << 
			"Dieythynsh		:"<<address << endl <<
			"Thlefwno		:"<<phone << endl <<
			"Kinhto			:"<<mobile << endl;
		};
		void submitInfo(){
			cout << endl << "Dwse onoma:";
			cin >> name;
			cout << endl << "Dwse epwnymo:";
			cin >> surname;
			cout << endl << "Dwse dieythynsh:";
			cin >> address;
			cout << endl << "Dwse thlefwno:";
			cin >> phone;
			cout << endl << "Dwse kinhto:";
			cin >> mobile;
		};
};

class Student:public Person{
	private:
		string grades;
		string course;
	public:
		Student(
			string name,
			string surname,
			string address,
			string phone,
			string mobile,
			string grades,
			string course
		)
		:
		Person(name,surname,address,phone,mobile){
			this->grades=grades;
			this->course=course;
		};
		
		void submitInfo(){
			Person::submitInfo();
			cout << endl << "Dwse vathmous:";
			cin >> grades;
			cout << endl << "Dwse mathima:";
			cin >> course;
		};
		void getInfo(){
			Person::getInfo();
			cout << 
			"Vathmoi			:"<<grades << endl <<
			"Mathima			:"<<course << endl;
		};
		
};

int main(){
	

	Student Alex("Alex","Petrake","Athina","210210210","210210210","10,10,10,10","TEP");

	Alex.getInfo();
	
	return 0;
};

