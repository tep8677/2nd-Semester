#include <iostream>
#include <fstream>


using namespace std;

void readFile(char* filename){
	ifstream file(filename);
	string line;
	while(getline(file,line)){
		cout << line << endl;
	}
	file.close();
};

void writeFile(char* filename,char* str){
	ofstream file(filename);
	file << str;
	file.close();
}

int main(){
	
	writeFile("cpp.txt","Hello world");
	readFile("cpp.txt");
	
	return 0;
}
