#include <iostream>

using namespace std;

void help(){
	cout << "exit -> quit the program" << endl;
};

int add(int x,int y){
	return x+y;
}

int main(){
	cout << "Welcome to my environment!" << endl;
	cout << "Version 0.0.0" << endl;
	string data;
	do{
		cout << endl << ">";
		cin >> data;
		if (data=="help"){help();}
		else if(data=="add"){
			int x,y;
			cout << "x-> ";
			cin >> x; 
			cout << "y-> ";
			cin >> y;
			cout << add(x,y);
		}
		else if(data=="write"){
			i
			string filename;
			while(getline(filename,line)){
				cofstream()
			};
			
		};
	}
	while(data!="exit");
	return 0;
	
}
