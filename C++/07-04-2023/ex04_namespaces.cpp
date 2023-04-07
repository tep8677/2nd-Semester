#include <iostream>


namespace Logistics{
	class Person{
		private:
			std::string name;
		public:
			Person(std::string);
			void showInfo(){
				std::cout << this->name << std::endl;
			};	
	};
};

namespace Pharmacy{
	class Person{
		private:
			std::string name;
		public:
			Person(std:: string);	
			void showInfo(){
				std::cout << this->name << std::endl;
			};
	};
};


int main(){
	Logistics::Person Jason("Jason");
	Pharmacy::Person Yonu("Yonu");
	Yonu.showInfo();
	Jason.showInfo();
	return 0;
};

Logistics::Person::Person(std::string name){
	this->name=name;
};

Pharmacy::Person::Person(std::string name){
	this->name=name;
};
