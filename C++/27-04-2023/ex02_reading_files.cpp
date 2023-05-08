#include <fstream>
#include <iostream>

using namespace std;

int main(){
	
	ifstream file("backFromEasterv3.cpp");
	string line;
	
	while (getline(file,line)){
		cout << line << endl;
	};
	file.close();
	
	return 0;	
};
