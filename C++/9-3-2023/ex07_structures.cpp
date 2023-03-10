#include <iostream>

using namespace std;


//structure - Δομή - record
struct car{
	string brand;
	string model;
	int year;
	void speed(){
		cout << "Brrooooomm";	
	};
	void printCar(){
	cout << endl << "============" << endl;
	cout << "Brand: " << brand << endl;
	cout << "Model: " << model << endl;
	cout << "Year: " << this->year << endl;
	};
};

void printCar(car newCar){
	cout << endl << "============" << endl;
	cout << "Brand: " << newCar.brand << endl;
	cout << "Model: " << newCar.model << endl;
	cout << "Year: " << newCar.year << endl;
	newCar.speed();
}

int main(){
	
	car myCar1;
	myCar1.brand="BMW";
	myCar1.model="X";
	myCar1.year=2020;
	
	cout << myCar1.brand << endl << myCar1.model << endl << myCar1.year << endl ;
	
	car myCar2;
	myCar2.brand="null";
	cout << myCar2.brand << endl;
	
	myCar2.speed();
	
	printCar(myCar2);
	
	myCar2.printCar();
	
	return 0;
}
