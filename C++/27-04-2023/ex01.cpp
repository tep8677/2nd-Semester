#include <iostream>
#include <vector>

using namespace std;


int main(){
	
	vector<string> kwdikos;
	vector<int> katanalwsh;
	
	bool gettingInput=true;
	
	string tempKwd;
	int tempKatanal;
	char resume;
	
	while (gettingInput){
		cout << endl << "Eishgage kwdiko pelath:";
		cin >> tempKwd;
		kwdikos.push_back(tempKwd);
		
		cout << endl << "Eishgage katanalwsh pelath se m^3:";
		cin >> tempKatanal;
		katanalwsh.push_back(tempKatanal);
		
		cout << endl << "Continue (y or n):";
		cin >> resume;
		if (resume=='n'){
			break;
		};
	};
		
	return 0;
}
