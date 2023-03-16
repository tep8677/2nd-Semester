#include <iostream>

using namespace std;


class PointerCount{
	private:
		int* id = new int;
	public:
		int value(){
			return *id;
		}
};

class ClassWithPointers{
	private:
		int id;
		
	public:
		ClassWithPointers(int *ptr){
			*ptr=*ptr+1;
			id=*ptr;
		};
		
		void displayID(){
			cout << id << endl;
		};

};


int main(){
	int* id = new int;
	*id = 0;
	
	PointerCount numberCounter;
	//changing external id value when a new class is created
	
	cout << numberCounter.value() << endl << endl;
//	ClassWithPointers One(numberCounter.value());
//	ClassWithPointers Two(numberCounter.value());
	ClassWithPointers Three(id);
	ClassWithPointers Four(id);
	///
//	One.displayID();
//	Two.displayID();
	Four.displayID();
	
	delete id;
	
	
	return 0;
}
