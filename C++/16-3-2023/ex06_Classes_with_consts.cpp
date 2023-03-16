#include <iostream>

using namespace std;

class Person{
	private:
		string name;
		string surname;
		string address;
		string phone;
		string mobile;
	public:
		
		void setName(string s){
			name=s;
		};
		void setSurname(string s){
			surname=s;
		};
		void setAddress(string s){
			address=s;
		};
		void setPhone(string s){
			phone=s;
		};
		void setMobile(string s){
			mobile=s;
		};
		
		string getName()
			const{return name;}
					
		string getSurname()
			const{return surname;}
					
		string getAddress()
			const{return address;}
					
		string getPhone()
			const{return phone;}
		
		string getMobile()
			const{return mobile;}
};



int main(){
	
	Person Jason;
	Jason.setName("Jason");
	Jason.setSurname("Derulo");
	Jason.setAddress("Athens");
	Jason.setPhone("1111");
	Jason.setMobile("420213");
	
	
	//get private properties with public  getMethods
	cout << Jason.getName() << endl;
	cout << Jason.getSurname() << endl;
	cout << Jason.getAddress() << endl;
	cout << Jason.getPhone() << endl;
	cout << Jason.getMobile() << endl;
	Jason.setPhone("23111");
	cout << Jason.getPhone();
	
	return 0;
};
