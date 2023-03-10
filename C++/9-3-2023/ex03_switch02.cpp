#include <iostream>

using namespace std;

int main(){
	char myLetter;
	cout << endl <<"enter a letter:";
	cin >> myLetter;
	
	
	///Switch but skipping breaks to our advantage
	switch(myLetter){
		case 'A': 
		case 'a':{
			cout << "You pressed A!";
			break;
		}
		case 'B':
		case 'b':{
			cout << "You pressed B!";
			break;
		}
		case 'C':
		case 'c':{
			cout << "You pressed C!";
			break;
		}
		case 'D':
		case 'd':{
			cout << "You pressed D!";
			break;
		}
		case 'E':
		case 'e':{
			cout << "You pressed E!";
			break;
		}
		case 'F':
		case 'f':{
			cout << "You pressed F!";
			break;
		}
		case 'G':
		case 'g':{
			cout << "You pressed G!";
			break;
		}
		case 'H':
		case 'h':{
			cout << "You pressed H!";
			break;
		}
		case 'I':
		case 'i':{
			cout << "You pressed I!";
			break;
		}
		case 'J':
		case 'j':{
			cout << "You pressed J!";
			break;
		}
		default:{
			cout << "I don't know what you typed";
			break;
		}
		
	}
	
	return 0;
}
