#include <iostream>

//referencing values so that we save memory.

void swap(int*, int*);
void refSwap(int&,int&);

int main(){
		
	int x=5;
	int y=4;
	std::cout << "x: " << x << ", y: " << y << std::endl;
	
	//swap(&x,&y); //anafora stis times
	
	refSwap(x,y); //this is a POTATO. 
				//We have to check the definition to ensure we use refs and not local copies...
	
	std::cout << "x: " << x << ", y: " << y << std::endl;
	return 0;
}

void swap(int* a, int* b){
	
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}



void refSwap(int& a, int&b){
	int temp;
	temp=a;
	a=b;
	b=temp;
	
}
