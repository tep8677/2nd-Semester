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
		///constrctor 
		
		//in case we don't want to use the the constructor.
		Person(){

		};
		
		Person(string a,string b,string c,string d,string e){
			name=a;
			surname=b;
			address=c;
			phone=d;
			mobile=e;
		};
		
		///Destructor
		~Person(){
			
		};
		
		
		///Set functions
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
		
		
		///Get functions
		//!!!!!!!!!!!
		///By using const we are telling the compiler that
		//the function shouldn't change any value..
		//This is especially useful if we are working
		//with pointers..
		//!!!!!!!!!!!!
		string getName()
			const{
			
			
			//name ="hello";
			
			//If we change the value of name we get error
			//as we use const 
			

			return name;
			
			}
					
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
	///We have defined what happens in case we don't use
	//a constructor
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
	/////////////////////////
	Person Yanny("Yanny","Newman","Kia","12341","111");
	//or  Yanny Person=("Yanny","Newman","Kia","12341","111");
	Yanny.getName();
	
	return 0;
};
