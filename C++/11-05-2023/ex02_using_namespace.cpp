#include <iostream>
#include <fstream>


using namespace std; //in simple programs it's okay to 'use' namespaces

int main(){
	
	char str[256];
	
	cout << "Enter the name of an existing text file: ";
	
	cin.get(str,256); 
	ifstream is(str);
	
	
	//depending on the situation decleration in the middle
	//might be good or bad..
	char c; 
	while (is.get(c)){ //getting single characters..
		cout <<c;
	}
	
	is.close(); //close file
	
	return 0;
}
