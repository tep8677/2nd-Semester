#include <iostream>

//referencing values so that we save memory.

void swap(int*, int*);

int main(){
		
	int x=5;
	int y=4;
	std::cout << "x: " << x << ", y: " << y << std::endl;
	
	swap(&x,&y); //anafora stis times
	
	std::cout << "x: " << x << ", y: " << y << std::endl;
	return 0;
}

void swap(int* a, int* b){
	
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
