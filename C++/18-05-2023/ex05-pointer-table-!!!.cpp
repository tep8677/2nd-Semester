#include <iostream>

using namespace std;

int main(){
	
	int count;
	cout << "Enter number of students: ";
	cin >> count;
	
	float *studentGrades = new float[count];
	
	
	
	
	for (int i=0;i<count;i++){
		cout << "Grade of student No." << i+1 << " :";
		
		cin >> *(studentGrades+i);
	}
	
	cout << "===================" << endl;
	cout << "The grades are" << endl;
	cout << "===================" << endl;
	
	for (int i=0;i<count;i++){
		cout << "Grade of student No." << i+1 << " :";
		
		cout << *(studentGrades+i) << endl;
	}
	
	delete []studentGrades;
	
	return 0;
	
		
}
