#include <fstream>
#include <iostream>

using namespace std;

void readFile(char* filename){
	ifstream file(filename);
	string line;
	while (getline(file,line)){
		cout << line << endl;
	}
	file.close();
}

int main(){
	
	readFile("backFromEasterv3.cpp");
	
	return 0;	
};
