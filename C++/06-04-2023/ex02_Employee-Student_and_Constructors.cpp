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
		Person(){
		};
		Person(string n,string s,string a,string p,string m){
			name=n;
			surname=s;
			address=a;
			phone=p;
			mobile=m;	
		};
		void setName(string n){
			name = n;
		};
		void setSurname(string n){
			surname = n;
		};
		void setAddress(string n){
			address = n;
		};
		void setPhone(string n){
			phone = n;	
		};
		void setMobile(string n){
			mobile = n;
		};
		string getName(){
			return name;
		};
		string getSurname(){
			return surname;
		};
		string getAdderss(){
			return address;
		};
		string getPhone(){
			return phone;
		};
		string getMobile(){
			return mobile;
		};
};


class Employee:public Person{
	private:
		int salary;
		string department;
	public:
		Employee(){
		};
		Employee(
			string n,
			string s,string a,
			string p,
			string m,
			int sal,
			string d)
		:Person(n,s,a,p,m){
			salary=sal;
			department=d;
		};
		void setSalary(int n){
			salary = n;
		};
		void setDepartment(string n){
			department=n;
		};
		int getSalary(){
			return salary;	
		};
		string getDepartment(){
			return department;
		};
};

class Student:public Person{
	private:
		string grades;
		string course;
	public:
		Student(){
		};
		Student(
			string n,
			string s,string a,
			string p,
			string m,
			string g,
			string c
		)
		:
		Person(n,s,a,p,m){
			this->grades=g;
			this->course=c;
		};
		
		void setGrades(string grades){
			this->grades=grades;
		};
		void setCourse(string course){
			this->course=course;
		};
		string getGrades(){
			return grades;
		};
		string getCourse(){
			return course;
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
			cout << endl << "Dwse vathmous:";
			cin >> grades;
			cout << endl << "Dwse mathima:";
			cin >> course;
		};
		void getInfo(){
			cout << endl << 
			"Onoma:			"<<name << endl << 
			"Epwnymo:		"<<surname << endl << 
			"Dieythynsh:	"<<address << endl <<
			"Thlefwno:		"<<phone << endl <<
			"Kinhto:		"<<mobile << endl <<
			"Vathmoi:		"<<grades << endl <<
			"Mathima:		"<<course << endl;
		};
		
};

class Client:public Person{
};

int main(){
	

	Student Alex("Alex","Petrake","Athina","210210210","210210210","10,10,10,10","TEP");
	
//	Alex.setName("Alex");
//	Alex.setSurname("Petrake");
//	Alex.setPhone("2101010104");
//	Alex.setMobile("6931010104");
//	Alex.setAddress("Athina");
//	Alex.setGrades("17,17,17,17");
//	Alex.setCourse("TEP");

	Student Yannis;
	
	Yannis.submitInfo();
	Yannis.getInfo();
	
	
//	cout <<
//	Alex.getAdderss() << endl <<
//	Alex.getCourse() << endl <<
//	Alex.getGrades() << endl <<
//	Alex.getMobile() << endl <<
//	Alex.getPhone() << endl <<
//	Alex.getName() << endl <<
//	Alex.getSurname() << endl;
//	
//	Employee Jason;
//	Jason.setSalary(65000);
//	cout << Jason.getSalary() << endl;
	
	return 0;
};

