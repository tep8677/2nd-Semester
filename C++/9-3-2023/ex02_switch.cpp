#include <iostream>

using namespace std;

void strOut(string myStr){
	cout << endl << myStr;
};

int main(){

//using switch()

int day;
cout << "Enter a number (1-7):";
cin >> day;


	strOut("Hello world it's ");
	switch(day){
		case 1:
			cout << "Monday";
			break;
		case 2:
			cout << "Tuesday";
			break;
		case 3:
			cout << "Wednesday";
			break;
		case 4:
			cout << "Thursday";
			//break; -> not using break will execute the commands of the following cases as well
			// until a break is found.
		case 5:
			cout << "Friday";
			//break;
		case 6:
			cout << "Saturday";
			break;
		case 7:
			cout << "Sunday";
			break;
		default:
			cout << "What do you mean with:" << day;
			break;
	}		
	cout << "!!!";

	
	return 0;
}




