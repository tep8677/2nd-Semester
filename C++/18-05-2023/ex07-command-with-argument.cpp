///Unfinished

#include <iostream>

using namespace std;

void getCommand(char* userInput,char* command,char* argument){
	int i,j;
	
	for (i=0;(userInput[i])!='\0';i++){
		command[i]=userInput[i];
	}
	i++;
	command[i]='\n';
	
	for (j=0;userInput[i]!='\n';i++){
		argument[j]=userInput[i];
	}
	
	
}


int main(){
	
	char userInput[100];
	char command[100];
	char argument[100];
	
	cout << "Enter your input: ";
	cin >> userInput;

	getCommand(userInput,command,argument);
	
	cout << "Input: " << userInput << endl;
	cout << "Command: " << command << endl;
	cout << "Argument: " << argument << endl;
	
	return 0;
	
}
