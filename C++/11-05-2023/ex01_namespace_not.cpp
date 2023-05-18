#include <iostream>
#include <fstream>

int main(){
	
	char str[256];
	
	std::cout << "Enter the name of an existing text file: ";
	
	std::cin.get(str,256);
	std::ifstream is(str);
	
	char c;
	while (is.get(c)){
		std::cout <<c;
	}
	is.close();
	
	return 0;
}
