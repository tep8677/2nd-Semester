#include <iostream>

using namespace std;



class Bird{
	protected:
		string color;
	public:
		Bird(string color){
			this->color=color;
		};
		void getInfo(){
			cout << this->color << endl;
		};
		void Chirp(){
			cout << "Tweet tweet" << endl;
		};
};

class Cat{
	protected:
		string tail;
	public:
		Cat(string tail){
			this->tail=tail;
		};
		void getInfo(){
			cout << this->tail << endl;
		};
		void Meow(){
			cout << "Meoww" << endl;
		};
};

class Animal:public Cat,public Bird{
	private:
		int age;
		string name;
	public:
		Animal(int age,string name,string color,string tail):Cat(tail),Bird(color){
			this->age=age;
			this->name=name;
		};
		void getInfo(){
			Cat:getInfo();
			Bird:getInfo();
			cout << this->age << endl;
		};
};

int main(){
	
	Animal RandomAnimal1(24,"Nyanners","green","yes");
	Animal RandomAnimal2(5,"Tweeter","red","no");
	RandomAnimal1.Meow();
	
	RandomAnimal2.Chirp();
	
	
};
