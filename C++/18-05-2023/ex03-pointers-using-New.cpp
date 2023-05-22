#include <iostream>

using namespace std;

int main(){
	
	int *x =new int(4);

	float *y = new float(5.3);


	cout << *x**y << endl;


	delete x;
	delete y;
	return 0;


}
