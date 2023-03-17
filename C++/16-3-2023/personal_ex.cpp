#include <iostream>

using namespace std;


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


	//deconstructor runs automatically
	//after exiting the block of code
	//in which the objects were created
	//(inside a function/while/etc.)
	// and it cleans up memory..

	//This happens in reverse order as of that they were created
		~ClassWithPointers(){
			cout << "Deleting object:" << id << endl;
		}

};


int main(){
	int* id = new int;
	*id = 0;
	
	ClassWithPointers One(id);
	ClassWithPointers Two(id);
	ClassWithPointers Three(id);
	ClassWithPointers Four(id);
	
	// delete the pointer after we have stopped using it
	delete id;
	
	///
//	One.displayID();
//	Two.displayID();
	Four.displayID();
	
	
	
	return 0;
}
